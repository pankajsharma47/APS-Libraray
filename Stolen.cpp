#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,c=0,n;
cout<<"Enter number of values\n";
cin>>n;
int a[n+1],dp[n+1];
for(i=0;i<n;i++)
cin>>a[i];
memset(dp,0,sizeof(dp));
dp[1]=a[0];
for(i=2;i<=n;i++)
{
if(dp[i-2]+a[i-1]>dp[i-1])
 dp[i]=dp[i-2]+a[i-1];
else
 dp[i]=dp[i-1];
}
cout<<dp[n]<<endl;
return 0;
}
