#include <iostream>
#include<cstring>
#include<bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    char a[100002],b[100002],c[100002]={0};
	    int ta1[256]={0},co=0;
	    int i,j,c1=0,l=0;
	    cin>>a>>b;
	     //sort(a.begin(), a.end()); 
	        char f=b[0];
	    for(i=0;a[i]!='\0';i++)
	    {
	     ta1[a[i]]++;
	    }
	   
	    for(i=1;b[i]!='\0';i++)
	     ta1[b[i]]--;
	     
	      for(i=0;b[i]!='\0';i++)
	      {
	       if(b[0]>b[i])
	       {
	        l=1;
	        break;
	       }
	       else if(b[0]<b[i])
	       {
	       l=2;
	       break;
	       }
	      }    
	    // cout<<l<<' ';
	   for(i=0;i<256;i++)
	    {
	        if(ta1[i]!=0)
	        {
	        if((char)i==(char)f)
	         {
	            if(l==2) 
	            {
	           for(j=0;j<ta1[i];j++)
	           {
	             c[c1]=(char)f;
	            // cout<<(char)f<<"1";
	             c1++;
	           }
	             for(j=1;b[j]!='\0';j++)
	             {
	                 c[c1]=(char)b[j];
	              //   cout<<(char)b[j]<<"2";
	                 c1++;
	             }
	         }
	       else if(l==1)
	         {
	             for(j=0;b[j]!='\0';j++)
	             {
	                 c[c1]=(char)b[j];
	              //   cout<<(char)b[j]<<"2";
	                 c1++;
	             }
	           for(j=0;j<ta1[i]-1;j++)
	           {
	             c[c1]=(char)f;
	            // cout<<(char)f<<"1";
	             c1++;
	           }
	         }
	         } 
	        else
	        {
	         for(j=0;j<ta1[i];j++)
	         {
	        c[c1]=(char)i; 
	        //cout<<(char)i<<"3";
	        c1++;
	         }
	        } 
	       // cout<<"h";
	     
	    }
	    }
	    c[c1]='\0';
	   cout<<c<<endl;
	   // cout<<a<<" "<<b;
	}
	return 0;
}
