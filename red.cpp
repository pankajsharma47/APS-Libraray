#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m,i,j;
	    cin>>n>>m;
	    while(n>0 && m>0)
	    {
	        n=n-m;
	        
	        m=m/2;
	       // cout<<n<<" "<<m<<endl;
	    }
	   // cout<<"answer";
	    if(n<=0)
	     cout<<1<<endl;
	    else
	     cout<<0<<endl;
	     
	    
	}
	return 0;
}
