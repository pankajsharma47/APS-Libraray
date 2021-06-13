#include<bits/stdc++.h>
using namespace std;


void solve(int left,int right)
{
    int result=1 , temp , common , bits=0 , first=0 , second=0;
    temp=left^right;
    while(temp)
    {
        temp>>=1;
        result<<=1;
        bits++;
    }
    result-=1;
    common=(left&(~result));
    if(bits>0)
    {
        first=(1<<(bits-1));
        second=first-1;
    }
    first+=common;
    second+=common;
    cout<<first<<" ^ "<<second<<"= "<<result;
    return;
}

int main()
{
int n,m,i,j,c=0;
cout<<"Enter upper and lower limit to calculate maximized xor"<<endl;
cin>>n>>m;
solve(n,m);
return 0;
}
