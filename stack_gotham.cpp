#include <bits stdc++.h>
using namespace std;

int save_gotham(int arr[], int n);

int main() {

int t;
cin>> t;
while(t--)
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++) 
cin>>arr[i];

cout << save_gotham(arr, n) << endl;
}

return 0;
}


int save_gotham(int a[], int n)
{
    // Complete the function
    long long int s=0,i,j,k;
    stack<int>st;
    st.push(a[n-1]);
    for(i=n-2;i>=0;i--)
    {
      while(!st.empty() && st.top()<=a[i])
      {
          st.pop();
      }
      if(st.empty())
      k=0;
      else
      k=st.top();
      s=s+k;
      s=s%1000000001;
      st.push(a[i]);
    }
    return s;
    
}