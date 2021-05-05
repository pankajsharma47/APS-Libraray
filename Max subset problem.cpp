#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j,k;
cout<<"Enter number of elements\n";
cin>>n;
int a[n];
cout<<"enter elements\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Enter sum of elements\n";
cin>>k;
int r[n+1][k+1];
for(i=0;i<=n;i++)
r[i][0]=1;
for(i=1;i<=k;i++)
r[0][i]=0;

for(i=1 ;i<=n;i++)
{
for(j=1;j<=k;j++)
{
if(r[i-1][j]==1)
 r[i][j]=1;
else
 {
  if(j<a[i-1])
   r[i][j]=0;
  else
   r[i][j]=r[i-1][j-a[i-1]];
 }
}
}
cout<<r[n][k]<<endl;
return 0;
}
