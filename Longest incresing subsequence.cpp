#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,j,i,k,c=0;
cout<<"enter number of elements\n";
cin>>n;
int a[n],b[n];

for(i=0;i<n;i++)
    b[i]=1;
cout<<"enter elements\n";
for(i=0;i<n;i++)
cin>>a[i];
for(i=1;i<n;i++)
{
for(j=0;j<i;j++)
{
if(a[j]<a[i] && b[i]<b[j]+1)
 b[i]=b[j]+1;
}
}
cout<<b[n-1]<<endl;
return 0;
}
