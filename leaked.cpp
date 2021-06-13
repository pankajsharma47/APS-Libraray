#include <stdio.h>

int main(void) {
	// your code goes here
	int r,t;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	    int j,i,k,n,c=0,m,b,d;
	    scanf("%d%d%d",&n,&m,&k);
	    int a[k],ta[10];
	    for(i=0;i<n;i++)
	    {
	       for(int y=0;y<10;y++)
             ta[y]=0;
	        // printf("%d\n",ta[i]);
	      for(j=0;j<k;j++)
	        {

	          scanf("%d",&a[j]);
	          ta[a[j]]++;

	        }
	        b=ta[1];
	           for(c=1;c<=m;c++)
	            if(b>=ta[c])
	           {
	             b=ta[c];
	           d=c;
	           }
	        printf("%d ",d);
            //printf("%d\n",ta[i]);

            //for(int y=1;y<=m;y++)
             //printf("%d\n",ta[y]);
	    }
	}
	return 0;
}

