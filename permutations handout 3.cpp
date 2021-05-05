#include<bits/stdc++.h>
using namespace std;
int main()
{
int num[1000];
int n,i,j,k,temp,c=0;
cout<<"Enter number\n";
cin>>n;
cout<<"enter elements\n";
for(i=0;i<n;i++)
cin>>num[i];
cout<<"Permutations are\n";
for(j=1;j<=n;j++)
{
for(i=0;i<n-1;i++)
{
temp=num[i];
num[i]=num[i+1];
num[i+1]=temp;

for(k=0;k<n;k++)
cout<<num[k]<<" ";
cout<<endl;
}
}

}
