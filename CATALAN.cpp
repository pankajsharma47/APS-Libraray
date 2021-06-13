#include<bits/stdc++.h>
using namespace std;

unsigned int catlan(unsigned int n)
{
unsigned int i,j,dp[n+1];
dp[0]=1;
dp[1]=1;
for(i=2;i<=n;i++)
{
dp[i]=0;
for(j=0;j<i;j++)
{
 dp[i]=dp[i]+(dp[j]*dp[i-j-1]);
}
}
return dp[n];
}

int main()
{
int n,i;
cout<<"Enter numbers to find catalan number"<<endl;
cin>>n;
for(i=0;i<n;i++)
cout<<catlan(i)<<" ";
return 0;
}
