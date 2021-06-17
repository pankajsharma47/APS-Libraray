#include <iostream>
using namespace std;

int main()
{
    int i,j,k,len1,len2,edit[100][100];
    string src,dest;
    cin>>src>>dest;
    len1=src.length();
    len2=dest.length();
    for(i=0;i<=len1;i++)
    edit[i][0]=i;
    for(i=0;i<=len2;i++)
    edit[0][i]=i;
    for(i=1;i<=len1;i++)
    {
      for(j=1;j<=len2;j++)
      {
      if(src[i-1]==dest[j-1])
      edit[i][j]=edit[i-1][j-1];
      else
      {
      int x=1+edit[i-1][j];//delete
      int y=1+edit[i][j-1];//insert
      int z=1+edit[i-1][j-1];//replace
      edit[i][j]=min(x,min(y,z));
      }
      }
    }
 cout<<edit[len1-1][len2-1]<<endl;
 for(i=0;i<=len1;i++)
 {
    for(j=0;j<=len2;j++)
 {
    cout<<edit[i][j]<<" ";
 }
 cout<<endl;
 }
	return 0;
}
