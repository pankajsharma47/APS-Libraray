#include<bits/stdc++.h>
using namespace std;

int bin_coeff(int n,int k)
{
int i,j,l,c[k+1];
memset(c,0,sizeof(c));
c[0]=1;
for(i=1;i<=n;i++)
{
for(j=min(i,k);j>0;j--)
{
c[j]=c[j]+c[j-1];
}
}
return c[k];
}

int main()
{
int i,j,k,n;
cout<<"enter value of n & k for triangle\n";
cin>>n>>k;
cout<<bin_coeff(n,k)<<endl;
return 0;
}
