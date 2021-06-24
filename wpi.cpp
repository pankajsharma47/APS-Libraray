#include<bits/stdc++.h>
using namespace std;
bool div(int a[],int n,int k)
{
    int sum=0;
    int i,j;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum<2*k)
    {
        return false;
    }
    bool pank[sum/2+1][n+1];
    for(int i=0;i<=n;i++)
    {
        pank[0][i]=true;
    }
    for(i=1;i<=sum/2;i++)
    {
        pank[i][0]=false;
    }
    for(int i=1;i<=sum/2;i++)
    {
        for(j=1;j<=n;j++)
        {
            pank[i][j]=pank[i][j-1];
            if(i>=a[j-1])
            {
                pank[i][j]=pank[i][j]||pank[i-a[j-1]][j-1];
            }
        }
    }
    for(int i=sum/2;i>=k;i--)
    {
        if(pank[i][n])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i-1];
        }
        sort(a,a+n,greater<int>());
        int flag=1;
        for(int i=1;i<=n;i++)
        {
            if(div(a,i,k)==true)
            {
                cout<<n-i<<"\n";
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"-1"<<"\n";
        }
    }
}
