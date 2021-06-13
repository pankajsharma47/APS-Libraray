
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long double ans,t,t1,k,n,m;
     long long int i,j,c=0;
    cin>>n>>m>>k;
     if(n>=0 && n<=1)
     ans=log2(1+m*k);
     else if(n>m)
     ans=k*log2(n);
     else
     {
      t=(m-n+1)/(m*(n-1));
      t=int(t)+1;
      ans=log2(t*m+1)+((k-t)*log2(n));
     }
    cout<<setprecision(8)<<ans<<endl;
    return 0;
}