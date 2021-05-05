// C++ program to demonstrate working of Square Root
// Decomposition.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define MAXN 1000000
#define SQRSIZE 100000

int arr[MAXN];             // original array
int block[SQRSIZE];         // decomposed array
int blk_sz;                     // block size

void update(int idx, int val)
{
    int blockNumber = idx / blk_sz;
    block[blockNumber] += val - arr[idx];
    arr[idx] = val;
}


int query(int l, int r)
{
    int sum = 10000000;
    while (l<r && l%blk_sz!=0 && l!=0)
    {
        if(sum>arr[l])
        sum = arr[l];
        l++;
    }
    while (l+blk_sz <= r)
    {

        if(sum>arr[l])
        sum = arr[l];
        l=l+blk_sz;
    }
    while (l<=r)
    {
       
        if(sum>arr[l])
        sum = arr[l];
        l++;
    }
    return sum;
}


void preprocess(int input[], int n)
{
   
    int blk_idx = -1;

    blk_sz = sqrt(n);

   
    for (int i=0; i<n; i++)
    {
        arr[i] = input[i];
        if (i%blk_sz == 0)
        {
           
            blk_idx++;
        }
        block[blk_idx] += arr[i];
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m,i,j,k,l,h,t;
    
    scanf("%d%d",&n,&m);
     int a[n];
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);
    preprocess(a, n);
    for(i=0;i<m;i++)
    {
         scanf("%d%d",&l,&h);
     printf("%d\n",query(l,h));
      
    }
    return 0;
}
