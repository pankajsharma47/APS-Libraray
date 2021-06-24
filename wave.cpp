#include<bits/stdc++.h>
using namespace std;

int main() {
	
	    int i,j,k,n,m,c=1,min,max;
	    cin>>n>>m;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    min=a[0];
	    max=a[n-1];
	    for(j=0;j<m;j++)
	    {
	        cin>>k;
	        if(k<min)
    {
      if(n%2==0)
      cout<<"POSITIVE"<<endl;
      else
      cout<<"NEGATIVE"<<endl;
    }
    else if(k>max)
    cout<<"POSITIVE"<<endl;
    else if(k==min||k==max)
    cout<<"0"<<endl;
    else   
	     {
	       i=lower_bound(a,a+n,k)-a;
	       if(i<n && a[i]==k)
           cout<<0<<endl;
           else if(i%2==0)
                     cout<<"POSITIVE"<<endl;
            else
                     cout<<"NEGATIVE"<<endl;

	     }   
	    }

	return 0;
}
