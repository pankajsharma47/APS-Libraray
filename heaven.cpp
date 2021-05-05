#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int i,j,k=0,n,m,c=0,l=0;
	    string s,s1;
	    cin>>m>>s;
	  

	     
	    for(i=0;i<m;i++)
	    {
	        if(s[i]=='1')
	        k=k+1;
	        else
	        c=c+1;
	        
	           if(c<=k)
	           {
	               l=1;
	               break;
	           }
	           
	           
	    }
	    if(l==1)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
