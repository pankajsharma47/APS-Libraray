#include <stdio.h>

int main(void) {
	// your code goes here
	int r,t;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	    int j,i,k,n,c=0;
	    scanf("%d",&n);
	    int a[n+1][n+1];
	    for(i=1;i<=n;i++)
	    {
	        for(j=1;j<=n;j++)
	        {
	            c++;
	           if(i%2!=0)
	           {
	            a[i][j]=c;
	           }
	            else
	            {
	            k=(n+1)-j;
	            a[i][k]=c;
	            }
	        }
	    }

	 for(i=1;i<=n;i++)
	 {
	  for(j=1;j<=n;j++)
	  {
	   printf("%d ",a[i][j]);
	  }
	   printf("\n");
	 }

	}
	return 0;
}

