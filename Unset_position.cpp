#include<bits/stdc++.h>
#define max1 1000000;
using namespace std;

unsigned int co1(unsigned int x,unsigned int i)
{

return (x & (~(1 << (i - 1))));
}


int main()
{
int n,x,i;
cout<<"Enter number to check and bit position to set"<<endl;
cin>>n>>i;
cout<<co1(n,i)<<endl;
return 0;
}
