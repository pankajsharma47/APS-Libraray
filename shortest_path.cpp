#include<bits/stdc++.h>
using namespace std;

#define max 1000000
int main()
{
  int t ;
   cin>>t;
   while(t--)
   {
      int n,m;
    cin>>n>>m;
    int a[n] , b[m];
    int i=0,j=0,k=0;
    for (i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    vector<int>vec(n);
    vec[0] = 0 ;
    int beg=-1,end=-1;
    for(i=1;i<n;i++){
       if(a[i]!=0)
        vec[i]=0;
       else
        vec[i]=max;
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==1)
           end=i;
       if(end!=-1)
       {
           if(a[i]==0)
            vec[i]=min(vec[i],i-end);
       }
   }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==2)
            beg=i;
        if(beg!=-1)
        {
            if(a[i]==0)
                vec[i] =min(vec[i],beg-i);
        }
    }
    for(i=0;i<m;i++)
    {
        j=b[i]-1;
        if(vec[j]!=max)
            cout<<vec[j]<<" ";
        else
            cout<<"-1"<<" ";
    }
   cout<<endl;     
   }
	return 0;
}