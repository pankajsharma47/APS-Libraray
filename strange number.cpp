#include <stdio.h>
#include<math.h>

void tk(long long int n,long long int k)
{
    long long int a[n],i,j,b=0,c=1;
    //printf("y ");

    while(n%2==0)
    {
       a[b]=2;
       n=n/2;
    b++;
    }
    for(i=3;i*i<=n;i=i+2)
    {
     while(n%i==0)
     {
         n=n/i;
         a[b]=i;
         b++;
     }
    }
    if(n>2)
    {
     a[b]=n;
     b++;
    }
    if(b<k)
    {
        printf("0\n");
        return;

    }
    for(i=k-1;i<b;i++)
     c=c*a[i];
     if(c>0)
      printf("1\n");
}
int main(void) {
	// your code goes here
	int r,t;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	    long long int k,n;
	    scanf("%lld%lld",&n,&k);
	   // printf("%lld%lld",n,k);
	    tk(n,k);
	}
	return 0;
}

