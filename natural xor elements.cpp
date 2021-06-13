/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
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
   long long int a,j,t,r,k,c=0,i,n,x,l,b;
   cin>>t;
   while(t--)
   {
    cin>>n; 
	k=n%4;
	if(k==1)
    	 cout<<1<<" "<<1<<endl;
    else if(k==2)
	    cout<<2<<" "<<n<<" "<<1<<endl; 
    else if(k==3)
	    cout<<0<<endl;	
	else
	cout<<1<<" "<<n<<endl;
    
   }
    return 0;
}