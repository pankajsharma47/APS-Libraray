#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,n,k=0;
cout<<"Enter number to count for number of set bits\n";
cin>>n;
while(n)
{
n=n&(n-1);
k++;
}
cout<<k<<endl;
return 0;
}
