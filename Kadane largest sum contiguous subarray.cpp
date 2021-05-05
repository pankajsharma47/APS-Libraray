#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,n,c=0,max=0,tmax=0;
cout<<"enter number elements\n";
cin>>n;
int a[n];
cout<<"enter elements\n";
for(i=0;i<n;i++)
cin>>a[i];

for(i=0;i<n;i++)
{
tmax=tmax+a[i];
if(tmax<0)
tmax=0;
if(tmax>max)
max=tmax;
}
cout<<max<<endl;
return 0;
}
