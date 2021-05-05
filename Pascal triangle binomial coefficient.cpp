#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,n;
cout<<"enter value of n & k for triangle\n";
cin>>n>>k;
int c[n+1][k+1];
for(i=0;i<=n;i++)
{
    for(j=0;j<=min(i,k);j++)
    {
        if(j==0||j==i)
            c[i][j]=1;
        else
            c[i][j]=c[i-1][j-1]+c[i-1][j];
            cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
cout<<c[n][k]<<endl;
return 0;
}
