#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   long long int n,i,j,k,c=0,c1=0,m=0,m1=0,r1,r2;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {c=0;
	    m=0;
	        cin>>j>>k;
	        while(j!=0)
	        {
	            r1=j%10;
	           
	            c=c+r1;
	           
	            j=j/10;
	            
	        }
	         while(k!=0)
	        {
	            r2=k%10;
	           
	            m=m+r2;
	           
	            k=k/10;
	            
	        }
	        if(c>m)
	        {
	         c1++;
	        // cout<<c1<<" c1 is";
	        }
	        else if(c<m)
	        {
	         m1++;
	         //cout<<m1<<"  ma is";
	        } 
	        else
	        {
	            c1++;
	            m1++;
	           //cout<<c1<<" "<<m1<<"tie her "; 
	        }
	    }
	   if(c1>m1)
	         cout<<0<<" "<<c1;
	        else if(c1<m1)
	         cout<<1<<" "<<m1;
	        else
	         cout<<2<<" "<<c1;
	         cout<<endl;
	    
	}
	return 0;
}
