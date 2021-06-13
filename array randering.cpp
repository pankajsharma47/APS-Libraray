#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long int i,j,k=0,n,c=0;
    cin>>n;
    long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    do{
         k=0;
       for(i=0;i<n-1;i++)
       {
          
           for(j=i+1;j<n;j++)
           {
               if((__gcd(a[i],2*a[j]))>1)
               k++;
           }
       }
       if(c<k)
       c=k;
    }while (next_permutation(a, a + n));
    
        cout<<c<<endl;
    }
    
    return 0;
}