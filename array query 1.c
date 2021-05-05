#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
typedef int ll;

void build(ll a[],ll seg[],ll s,ll e,ll node)
{
    if(s==e)
    {
        seg[node]=a[s];
        return;
    }
    ll mid=s+(e-s)/2;
     build(a,seg,s,mid,2*node+1);
      build(a,seg,mid+1,e,2*node+2);
     if(seg[2*node+1]<seg[2*node+2])
         seg[node]=seg[2*node+1];
    else
        seg[node]=seg[2*node+2];
    
}

int find(ll seg[],ll s,ll e,ll node,ll l,ll r)
{
    if(s>r||e<l)
        return INT_MAX;
    if(s>=l && e<=r)
        return seg[node];
    ll mid=s+(e-s)/2;
    ll a=find(seg,s,mid,2*node+1,l,r);
    ll b=find(seg,mid+1,e,2*node+2,l,r);
    if(a>b)
        return b;
        return a;
    
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n,m,t,i,j,k,c=0;
    scanf("%d%d",&n,&m);
    ll a[n];
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    int seg[4*n];
    build(a,seg,0,n-1,0);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&j,&k);
        c=find(seg,0,n-1,0,j,k);
          printf("%d\n", c);
    }
    return 0;
}
