#include <iostream>
using namespace std;

int main() {
    int i,n,j,c=0;
    cout<<"Enter number of elements and numbers:"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    c=c^a[i];
    cout<<c<<endl;
	return 0;
}
