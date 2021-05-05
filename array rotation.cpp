#include<bits/stdc++.h>
using namespace std;

int main(void) {
   long long int q,i,j,k,n,m=1000000007,l,c=0;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>k;
       c=(c+k+m)%m;
   }
   c=c%m;
   cin>>k;
   for(i=0;i<k;i++)
   {
       c=(c*2)%m;
       cout<<c<<endl;
   }

	return 0;
}