#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,n;
cout<<"Enter number to check\n";
cin>>n;
int r[n+1];
memset(r,0,sizeof(r));
r[0]=1;
for(i=3;i<=n+1;i=i+1)
r[i]=r[i]+r[i-3];
for(i=5;i<=n+1;i=i+1)
r[i]=r[i]+r[i-5];
for(i=10;i<=n+1;i=i+1)
r[i]=r[i]+r[i-10];
cout<<r[n];
return 0;
}
