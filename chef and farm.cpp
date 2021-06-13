#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	 long long int n,k,i,j,c=100000000,m=-1;   
	 cin>>n>>k;
	 long long int a[n+2];
	 for(i=0;i<n;i++)
	  cin>>a[i];
	 for(i=0;i<n;i++)
	 {
	     if(a[i]<=k)
	     {
	         if(k%a[i]==0)
	         {
	             j=k/a[i];
	             if(j<c)
	             {
	             c=j;
	             m=a[i];
	             }
	         }
	     }
	 }
	 cout<<m<<endl;
	}
	return 0;
}
