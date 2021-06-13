#include <stdio.h>
int main()
{
    int t,i,g,x,y,c,m,b,j,f;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        scanf("%d",&x);
        int z[x];
        for(j=0;j<x;j++)
        {
            scanf("%d",&y);
            z[j]=y;
        }
        m=x-1;
        for(m;m>=0;m--)
        {
            b=0;
            for(g=1;(g<=5)&&(m-g>=0);g++)
            {
               if(z[m]>=z[m-g])
               {
               b=1;
               }
            }
            if(b!=1)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
	// your code goes here
	return 0;
}
