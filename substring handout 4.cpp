#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   char a[]={'a','b','c','d'};
   int n=4;
   for(int i=0;i<(1<<n);i++)
   {
       for(int j=0;j<n;j++)
       if(i&(1<<j))
        cout<<a[j];
        cout<<endl;
   }

    return 0;
}
