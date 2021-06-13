#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n,j,k=0,c=0,mn=100000,mx=0,l1=0,l2=0;
    cout<<"Enter number of elements and non consecutive numbers:"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i];
     c=c^a[i];
     if(mx<a[i])
     {
         mx=a[i];

     }
     if(mn>a[i])
     {
         mn=a[i];

     }
    }
    //cout<<mn<<" "<<l2<<endl;
   // cout<<mx<<" "<<l1<<endl;


    for(i=mn;i<=mx;i++)
    k=k^i;
    j=k^c;
    cout<<j<<endl;
	return 0;
}
