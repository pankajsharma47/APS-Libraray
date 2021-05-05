#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=9,i,j;
int look[50][50];
int a[]={7,2,3,0,5,10,3,12,18};
for(i=0;i<n;i++)
look[i][0]=i;
for(j=1;(1<<j)<=n;j++)
{
for(i=0;(i+(1<<j)-1)<n;i++)
{
if(a[look[i][j-1]]<a[look[i+(1<<(j-1))][j-1]])
look[i][j]=look[i][j-1];
else
look[i][j]=look[i+(1<<(j-1))][j-1];
}
}
cout<<look[1][3]<<endl;
return 0;
}
