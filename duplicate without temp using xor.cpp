#include <iostream>
using namespace std;

int main() {
    int i,n,j;
    cout<<"Enter number of elements and numbers:"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=1;i<n;i++)
    {
    a[i]=a[i]^a[i-1]^(i);
   // cout<<a[i]<<" ";
    }
    cout<<a[i-1]<<endl;
	return 0;
}
