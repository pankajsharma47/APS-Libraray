#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	   long long int p,q,d,i,j,k,n,m,c=0;
	    cin>>n>>d>>p>>q;
        c=n*p;
        k=(n-d)/d;
        k=(k*(k+1))/2;
        k=k*q;
        c=c+k*d;
        k=n%d;
        c=c+(n/d)*k*q;
	    cout<<c<<endl;
	}
	return 0;
}
