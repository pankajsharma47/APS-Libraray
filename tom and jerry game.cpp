#include <stdio.h>

int main(void) {
	// your code goes here
	int r,t;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	    long long int n,j=0,i,k=0,c=0,l=0;

	    scanf("%lld",&n);
	     if(n%2!=0)
	              l=n/2;
	     else
         {
	                k=n;
	                while(k%2==0)
                    {
                        c++;
	                    k=k/2;
	             if(k%2!=0)
	             {
	              j=1;
                   break;
	             }
                    }
                    if(j==1)
                    l=k/2;
         }

	 printf("%lld\n",l);

	}
	return 0;
}
