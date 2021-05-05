#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    char a,b;
    cout<<"Enter character to toggle"<<endl;
    cin>>a;
    i=(int)a;
    j=i&(~32);
    cout<<(char)j<<endl;
    return 0;
}
