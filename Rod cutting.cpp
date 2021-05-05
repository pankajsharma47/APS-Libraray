#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,c=0,n;
cout<<"Enter Length\n";
cin>>n;
int result[n+1];
memset(result,0,sizeof(result));
for(i=2;i<=n;i++)
{
for(j=1;j<=i/2;j++)
{
k=max(result[i],j*(i-j));
result[i]=max(k,j*result[i-j]);
}
}
cout<<result[n];
return 0;
}
