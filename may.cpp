#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int i,j,k,n,c=0,s=0;
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	 sort(a,a+n);
	 for(i=0;i<n;i++)
	 {
	     a[i]=a[i]-s;
	     s=s+a[i];
	     
	     if(a[i]>0)
	     {
	        // for(j=i+1;j<n;j++)
	          //a[j]=a[j]-a[i];
	          a[i]=0;
	          c++;
	     }
	 }
	    cout<<c<<endl;  
	}
	return 0;
}
