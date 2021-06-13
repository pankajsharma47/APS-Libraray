#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   long long int n,i,j,c=0;
	    cin>>n;
	    long long int a[n+1];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=1;i<n;i++)
	    {
	       c=c+(abs(a[i]-a[i-1])-1);
	    }
	    cout<<c<<endl;
	}
	return 0;
}
