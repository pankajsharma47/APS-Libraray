#include <stdio.h>

int main(void) {
	// your code goes here
	int r,t;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	    int j,i,k,n,c=0,s=0;
	    scanf("%d%d",&n,&k);
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        s=s+a[i];
	        if(a[i]>k)
	        c=c+(a[i]-k);
	    }
	 printf("%d\n",c);
	    
	}
	return 0;
}

