#include <stdio.h>

int main(void) {
	// your code goes here
	int r,t;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	    int j,i,k=0,n,c=0,s=0,l=0;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==5)
	         s=s+5;
	         
	         else if(a[i]==10)
	         {
	           if(s>=5)
	           {
	            s=s-5;
	            c=c+10;
	           } 
	           else
	           {
	               k=1;
	               break;
	           }
	         }
	         else
	         {
	           if(c>=10 || s>=10)
	           {
	               l=l+15;
	            if(c>=10)
	                 c=c-10;
	            else
	               s=s-10;
	   
	           } 
	           else
	           {
	               k=1;
	               break;
	           }
	         }
	    }
	 if(k==0)
	  printf("YES\n");
	 else
	  printf("NO\n");
	    
	}
	return 0;
}

