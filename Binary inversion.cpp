/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,j,r,k,c=-1,i,n,x,l,b;
    cin>>n>>a>>x;
    long long  int p[n];
    b=n-a;

    if(x>a*b)
    {
    cout<<-1<<endl;
    }
    else
    {
    j=x/b;
    r=x%b;
    c=r;
    l=n-j-1-b;
    i=0;
    while(l--)
    p[i++]=0;
    while(c--)
    p[i++]=1;
    p[i++]=0;
    l=b-r;
    while(l--)
    p[i++]=1;
    while(j--)
    p[i++]=0; 
    for(i=0;i<n;i++)
    {
     cout<<p[i]<<" ";
    }
     cout<<endl;
    }
    return 0;
}