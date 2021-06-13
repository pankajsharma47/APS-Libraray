#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(void) {
	// your code goes here
	int r,t;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	   long int j,i,n,b=0;
	   scanf("%ld",&n);
	   long int a[n];
	   for(i=0;i<n;i++)
	   {
	       scanf("%ld",&a[i]);

	   }

     sort(a,a+n,greater<int>());
     
	   for(i=0;i<n;i++)
	   {
	      // printf("%d",a[i]);
	       if(a[i]-i>=0)
           {
               a[i]=a[i]-i;
	       b=b+a[i];
           }
        
	       }
	   b=b%1000000007;
	   printf("%ld\n",b);
	}
	return 0;
}

