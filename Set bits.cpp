#include<bits/stdc++.h>
#define max1 1000000;
using namespace std;

unsigned int co(unsigned int x)
{
    unsigned int count=0;
    while(x>0)
    {
        count=count+(x&1);
        x=x>>1;
    }
    return count;
}

int main()
{
int n,x;
cout<<"Enter number to check for set bits"<<endl;
cin>>n;
cout<<co(n)<<endl;
return 0;
}
