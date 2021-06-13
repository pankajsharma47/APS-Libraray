#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j,k;
	    cin>>n;
	    for(i=0;i<8;i++)
	    {
	        for(j=0;j<8;j++)
	        {
	            if(i==0 && j==0)
	            {
	             cout<<"O";
	             n--;
	            }
	            else if(n>0)
	            {
	             cout<<".";
	             n--;
	            }
	            else
	             cout<<"X";
	            
	        }
	        cout<<endl;
	    }
	    cout<<endl;
	}
	return 0;
}
