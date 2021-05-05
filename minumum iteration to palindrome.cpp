#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,n,m;
string s1,s2,s3="";
cout<<"enter string to calculate minimum iterations for palindrome\n";
cin>>s1;
n=s1.length();
s2=s1;
reverse(s2.begin(),s2.end());
int r[n+1][n+1];
for(i=0;i<=n;i++)
r[i][0]=0;
for(i=0;i<=n;i++)
r[0][i]=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(s1[i-1]==s2[j-1])
r[i][j]=r[i-1][j-1]+1;
else
r[i][j]=max(r[i-1][j],r[i][j-1]);
}
}
cout<<n-r[n][n]<<endl;
return 0;
}
