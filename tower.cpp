#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,i,j,k,c=1,r=1,sc=0,sr=0;
	    cin>>n>>k;
	   if(n>=9)
	   {
	     if(n%9==0)
	      c=n/9;
	     else
	     c=(n/9)+1;
	   }
	   	   if(k>=9)
	   {
	     if(k%9==0)
	      r=k/9;
	     else
	     r=(k/9)+1;
	   }
	   if(r==c)
	    cout<<1<<" "<<r<<endl;
	   else
	    {
	        if(r>c)
	         cout<<0<<" "<<c<<endl;
	       else
	         cout<<1<<" "<<r<<endl;
	    }
	    
	}
	return 0;
}
