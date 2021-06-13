#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,k,n,m,c=0;
	    cin>>i>>j>>n>>m;
	    c=c+n/i;
	    c=c+m/j;
	    cout<<c<<endl;
	}
	return 0;
}
