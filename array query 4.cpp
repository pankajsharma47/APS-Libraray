#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,n,k=0,c=0;

cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>j; 
        k=0;
while(j)
{
j=j&(j-1);
k++;
}
  // cout<<k<<" ";     
   c=c+k;     
    }      
cout<<c<<endl;
        
return 0;
}
