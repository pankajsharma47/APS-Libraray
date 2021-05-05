#include<bits/stdc++.h>
#define max1 1000000;
using namespace std;

unsigned int co1(unsigned int x,unsigned int i)
{
    unsigned int count=0;
    while(i--)
    {
        x=x>>1;

    }
            if(x&1==1)
            count=1;
    if(count==1)
     return 1;
    else
     return 0;
}


int main()
{
int n,x,i;
cout<<"Enter number to check and bit position"<<endl;
cin>>n>>i;
cout<<co1(n,i)<<endl;
return 0;
}
