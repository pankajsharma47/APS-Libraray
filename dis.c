#include <stdio.h>

void read(int a[100][100],int n)
{
    int i,j;
    	    for(i=1;i<=n;i++)
    	    {
	        for(j=1;j<=n;j++)
	        {
	            scanf("%d",&a[i][j]);
	            //b[i][j]=a[i][j];
	        }
    	    }
    
}

void dis(int a[100][100],int n)
{
    	    for(int i=1;i<=n;i++)
    	    {
	        for(int j=1;j<=n;j++)
	        {
	            printf("%d ",a[i][j]);
	        }
	        printf("\n");
    	    }
}

void swap(int *a1,int *b)
{
    int temp;
    temp=*a1;
    *a1=*b;
    *b=temp;
}

void tr(int a[100][100],int k)
{
    for(int l=1;l<=k;l++)
    {
        for(int p=1;p<=k;p++)
        {
            if(l>p)
            {
               // printf("%d %d ",l,p);
                swap(&a[l][p],&a[p][l]);
            }
        }
    }
}
 
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,i,j,k,c=0,s=0;
	    scanf("%d",&n);
	    int a[100][100];
        read(a,n);
        //dis(a,n);
        for(i=1;i<=n;i++)
        {
            for(j=n;j>=1;j--)
            {
                if(a[i][j]!=((i-1)*n+j))
                {
                   // printf("hii");
                    k=((i-1)*n+j);
                    tr(a,k);
                    c++;
                }
            }
      
        }
    
       
       // dis(a,n);
        

        printf("%d\n",c);
    
	}
	return 0;
}

