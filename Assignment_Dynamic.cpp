#include<bits/stdc++.h>
#define max1 1000000;
using namespace std;

unsigned int co(unsigned int x)
{
    unsigned int count=0;
    while(x>0)
    {
        count=count+(x&1);
        x=x>>1;
    }
    return count;
}


unsigned int co1(unsigned int x,unsigned int i)
{
    unsigned int count=0;
    while(i--)
    {
        x=x>>1;

    }
    if(x&1==1)
     count=1;
    if(count==1)
     return 1;
    else
     return 0;
}


int main()
{
    int i,j,k,c=0,n,mask,x;
    cout<<"Value of n"<<endl;
    cin>>n;
    int t=pow(2,n);
    int cost[n+1][n+1],dp[t];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

        cin>>cost[i][j];
    }
    }
    dp[0]=0;
    for(i=1;i<pow(2,n);i++)
    dp[i]=max1;

     for(mask=0;mask<pow(2,n);mask++)
     {
         x=co(mask);
         for(j=0;j<n;j++)
         {
             k=co1(mask,j);
             if(k==0)
             {
                 int l=mask|(1<<j);
                // int u=1<<j;
                 dp[l]=min(dp[l], dp[mask]+cost[x][j]);
             }
         }
     }

    cout<<dp[t-1]<<endl;
    return 0;
}
