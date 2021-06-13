
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int n,m,x,q,i,j,k,r,c1,c2,c=0,l,f,d;
cin>>n>>m>>x>>q;
d=n*m;
vector<vector<long long int>>a(n);

for(i=0;i<n;i++)
{
a[i] = vector<long long int>(m);
for(j=0;j<m;j++)
{
 a[i][j]=x+i+j+2;
} 
}
for(f=0;f<q;f++)
{
 cin>>k;
 if(k==1)
 {
     cin>>r>>c1>>c2;
    
     for(i=c1-1;i<=c2-1;i++)
     {
     a[r-1][i]=-5;
     d--;
     }
 } 
 else if(k==2)
 {
     cin>>r>>c1>>c2;
     
     for(i=c1-1;i<=c2-1;i++)
     {
     a[i][r-1]=-5;
     d--;
     }
 }   
 else if(k==3)
 {
     cin>>r;
     vector<long long int>so;
         for(i=0;i<m;i++)
         {    
         for(j=0;j<n;j++)
         if(a[i][j]!=-5)
         so.push_back(a[i][j]);
         
         }
         sort(so.begin(),so.end());
         if(r>so.size())
         cout<<-1<<endl;
         else
         cout<<so[r-1]<<endl;
    

 }
}

 return 0;   
}