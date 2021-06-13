#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,k,n,m,c=0,l,h;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int a[n];
		 for(i=0;i<n;i++)
	    {
	    	if(s[i]=='1')
	        a[i]=1;
	        else
	        a[i]=0;

	    if(i>0)
	    {
	        if(a[i]==a[i-1])
	        c=c+2;
	        else
	        c=c+1;
	    }
	    }
	 //  cout<<c<<endl;
	  // printf("%d",a[1]);
	    while(k--)
	    {
	        cin>>l;
	        if(a[l-1]==1)
	        a[l-1]=0;
	        else
	        a[l-1]=1;
	       // printf("%d",a[l-2]);
	        if((int)a[l-1]==(int)a[l-2] && l-2>=0)
	        {
	         c=c+1;
	       //  cout<<c<<" ";
	        }
	        else if((int)a[l-1]!=(int)a[l-2] && l-2>=0)
	       {
	         c=c-1;
	       //  cout<<c<<" ";
	        }

	       if((int)a[l-1]==(int)a[l] && l<n)
	           {
	         c=c+1;
	        // cout<<c<<" ";
	        }
	       else if((int)a[l-1]!=(int)a[l] && l<n)
	         {
	         c=c-1;
	        // cout<<c<<" ";
	        }

	   cout<<c<<endl;
	    }

	}
	return 0;
}
