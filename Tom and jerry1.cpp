#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,k,n,m,c=0,a,b;
	    cin>>a>>b>>n>>m>>k;
	    c=abs(n-a)+abs(m-b);
	  if(c>k)
	    cout<<"NO"<<endl;
	     else if(c==k)
	    {
	      cout<<"YES"<<endl;   
	    }
	    else
	    {
	        c=k-c;
	        //cout<<c<<" ";
	        if(c%2==0)
	        cout<<"YES"<<endl;  
	        else
	         cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
