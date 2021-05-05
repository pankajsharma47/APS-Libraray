#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,n,m;
string s1,s2,s3="";
cout<<"enter both string to calculate longest subsequence\n";
cin>>s1>>s2;
n=s1.length();
m=s2.length();
int r[n+1][m+1];
for(i=0;i<=n;i++)
r[i][0]=0;
for(i=0;i<=m;i++)
r[0][i]=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{
if(s1[i-1]==s2[j-1])
r[i][j]=r[i-1][j-1]+1;
else
r[i][j]=max(r[i-1][j],r[i][j-1]);
}
}
cout<<r[n][m]<<endl;
return 0;
}
