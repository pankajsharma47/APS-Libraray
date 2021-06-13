#include <stdio.h>

int main(void) {
	// your code goes here
	int r,t;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	    int j,i,k,n,c=0;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	     scanf("%d",&a[i]);
	   for(i=0;i<n;i++)
	   {
	       k=0;
	       c=0;
	       if(a[i]!=0)
	       {
	         for(j=i+1;j<i+6;j++)
	         {
	           if(a[j]==1)
	           {
	               k=1;
	               break;
	           }
	       }
	       }
	       if(k==1)
	         break;
	       
	   }
	    if(k==1)
	     printf("NO\n");
	    else
	      printf("YES\n");
	}
	return 0;
}

