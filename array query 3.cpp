#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll kadane(ll temp[],ll *s,ll *f,ll n)
{
    ll tmax=0,max=INT_MIN,i,j=0,k;
    *f=-1;
    for(i=0;i<n;i++)
    {
        tmax=tmax+temp[i];
        if(tmax<0)
        {
            tmax=0;
            j=i+1;
        }
        else if(max<tmax)
        {
            max=tmax;
            *s=j;
            *f=i;
        }
    }
    if(*f!=-1)
      return max;
    max=temp[0];
    *s=0;
    *f=0;
    for(i=1;i<n;i++)
    {
        if(temp[i]>max)
        {
            max=temp[i];
            *s=*f=i;
        }
    }
    return max;
}

void find(ll a[][1000],ll n,ll m)
{
    ll l,r,fl,fr,t,b,max=INT_MIN,i,j,c=0,temp[n],s,f,sum;
    for(l=0;l<m;l++)
    {
        memset(temp,0,sizeof(temp));
        for(r=l;r<m;r++)
        {
            for(i=0;i<n;i++)
                temp[i]+=a[i][r];
            sum=kadane(temp,&s,&f,n);
            if(sum>max)
            {
                max=sum;
                fl=l;
                fr=r;
                t=s;
                b=f;
            }
            
        }
    }
    cout<<max<<endl;
     cout<<t<<" "<<b<<" ";
    for(i=t;i<=b;i++)
    {
        for(j=fl;j<=fr;j++)
        {
            if(a[i][j]<0)
                c=c+abs(a[i][j]);
        }
    }
    cout<<c<<" ";
    cout<<max+c<<endl;
}

int main()
{
    ll i,j,k,n,m,c=0;
    cin>>n>>m;
    ll a[n][1000];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    find(a,n,m);
    return 0;
}