#include<bits/stdc++.h>
using namespace std;

int bin_coeff(int n,int k)
{
if(k==0 || k==n)
return 1;

return bin_coeff(n-1,k-1)+bin_coeff(n-1,k);

}
int main()
{
int i,j,k,n;
cout<<"enter value of n & k for triangle\n";
cin>>n>>k;

cout<<bin_coeff(n,k)<<endl;
return 0;
}
