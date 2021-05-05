#include <bits/stdc++.h>
using namespace std;
    int M[10000][10000];

int kadane(int a[],int n)
{
    int i,tmax=0,max=0;
    for(i=0;i<n;i++)
{
tmax=tmax+a[i];
if(tmax<0)
tmax=0;
if(tmax>max)
max=tmax;
}
return max;
}

int findMaxSum (int matrix[10000][10000],int numRows,int numCols)
{
    int maxSum=0;
 
    for (int left = 0; left < numCols; left++)
    {
        int temp[10000] = {0};
 
        for (int right = left; right < numCols; right++)
        {
          
            for (int i = 0; i < numRows; ++i)
                temp[i] += matrix[i][right];
 
          
            int sum = kadane(temp, numRows);
 
            if (sum > maxSum)
                maxSum = sum;
        }
    }
 
    return maxSum;
}
// Driver Code
int main()
{
int n,m,i,j;
    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>M[i][j];
        }
    }
    cout<<findMaxSum(M,n,m);

    return 0;
}