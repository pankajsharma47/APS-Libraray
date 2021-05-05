#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int ll;

ll merges(ll a[],ll temp[],ll l,ll mid,ll r)
{
    ll i,j,k,c=0;
    i=l;
    j=mid;
    k=l;
    while((i<=mid-1) &&(j<=r))
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else
        {
           temp[k++]=a[j++];
            c=c+(mid-i);
        }
    }
    while(i<=mid-1)
        temp[k++]=a[i++];
     while(j<=r)
        temp[k++]=a[j++];
    for(i=l;i<=r;i++)
        a[i]=temp[i];
    return c;
}


ll _merge(ll a[],ll temp[],ll l,ll r)
{
    ll count=0;
    if(l<r)
    {
        ll mid=(l+r)/2;
        count+=_merge(a,temp,l,mid);
        count+=_merge(a,temp,mid+1,r);
        count+=merges(a,temp,l,mid+1,r);
        
    }
    return count;
}

ll merge(ll a[],ll n)
{
    ll temp[n];
    return _merge(a,temp,0,n-1);
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k,c=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        c=merge(a,n);
        if(c>=n)
            cout<<c<<endl<<"YES"<<endl;
        else
             cout<<c<<endl<<"NO"<<endl;
    }
    return 0;
}