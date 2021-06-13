#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
long long int pankaj(long long int n, long long int m)
{
    if(m==0)
    return 0;
    if(m==1)
    return n;
    if(m%2==0)
    {
        long long int k=pankaj(n,m/2);
        return (k*k)%M;
    }
    else
    {
        long long int k=pankaj(n,((m-1)/2));
        return ((n*k)%M*k)%M;
    }
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    long long int i,j,k,n,m,c=0;
	    cin>>n>>m;
	    k=pankaj(2,n)-1;
	    cout<<pankaj(k,m)<<endl;
	  
	}
	return 0;
}
