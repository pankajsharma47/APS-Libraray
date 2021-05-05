#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   long long int i,j,k=0,n,m=0,c=0,w,w1;
	    cin>>n>>w>>w1;
	   long long int a[n],ta[10000000]={0};
	    for(i=0;i<n;i++)
	    {
	    cin>>a[i];
	    ta[a[i]]++;
	    c=c+a[i];
	    }
	    if(c+w1<w)
	    k=0;
	    else
	    {
	        for(i=0;i<10000000;i++)
	        {
	            if(ta[i]>1)
	            {
	                while(ta[i]>1)
	                {
	              w1=w1+2*i; 
	              ta[i]=ta[i]-2;
	                }
	            }
	            if(w<=w1)
	            {
	                k=1;
	                break;
	            }
	        }
	    }
	    if(k==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
