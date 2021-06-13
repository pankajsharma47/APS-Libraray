#include <stdio.h>

int main(void) {
	// your code goes here
	int r,t;
	scanf("%d",&t);
	for(r=0;r<t;r++)
	{
	    int j=0,i,c=0;
	   char a[100001];
	   scanf("%s",a);
	   for(i=0;i<strlen(a)-1;i++)
	   {
	       if(a[i]!=a[i+1])
	       {
	            c++;
	            i++;
	       }
	   }
	    printf("%d\n",c);
	}
	return 0;
}

