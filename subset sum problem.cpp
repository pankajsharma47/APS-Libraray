#include <bits/stdc++.h>
using namespace std;
int isSubsetSum(int set[], int n, int sum)
{
int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
    dp[0][i]=0;
  for(int i=0;i<=n;i++)
    dp[i][0]=1;
  if(sum==0)
    return 1;
  if(n<=0)
    return 0;
     for(int i=1;i<=n;i++)
     {
       for(int j=1;j<=sum;j++)
       {
        if(j<set[i-1])
          dp[i][j]=dp[i-1][j];
         else
          dp[i][j]=dp[i-1][j] ||  dp[i-1][j-set[i-1]];  
       }
     } 
return dp[n][sum];
}
int main()
{
	int set[] = { 3, 34, 4, 12, 5, 2 };
	int sum = 15;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		printf("Found a subset with given sum");
	else
		printf("No subset with given sum");
	return 0;
}