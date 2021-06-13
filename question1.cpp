#include<iostream>
using namespace std;
int main()
{
int i,k=0,j=0,n,m,c=0;
cout<<"15 available cards to the user"<<endl;
int a[]={2,3,5,7,8,9,1,5,6,11,12,10,14,13,15},b[10];
cout<<"Enter 1 if you see your card else enter 0"<<endl;
for(i=0;i<5;i++)
cout<<a[i]<<" ";
cout<<endl;
cin>>k;
if(k==1)
{
 for(i=0;i<5;i++)
    b[j++]=a[i];
}
else if(k==0)
{
for(i=5;i<10;i++)
cout<<a[i]<<" ";
cout<<endl;
cout<<"Enter 1 if you see your card else enter 0"<<endl;
cin>>k;
}

if(k==1)
{
for(i=5;i<10;i++)
    b[j++]=a[i];
}

else if(k==0)
{
for(i=10;i<15;i++)
cout<<a[i]<<" ";
cout<<endl;
cout<<"Enter 1 if you see your card else enter 0"<<endl;
cin>>k;
}

if(k==1)
{
for(i=10;i<15;i++)
    b[j++]=a[i];
}
k=0;
for(i=0;i<3;i++)
{
cout<<b[i]<<" ";
}
cout<<endl;
cout<<"Enter 1 if you see your card else enter 0"<<endl;
cin>>k;
if(k==0)
{
cout<<b[3]<<" ";
cout<<endl;
cout<<"Enter 1 if you see your card else enter 0"<<endl;
cin>>k;
if(k==0)
    cout<<"you have selected: "<<b[4]<<endl;
else
    cout<<"you have selected: "<<b[3]<<endl;
}
else
{
  cout<<b[0]<<" "<<b[1];
cout<<endl;
cout<<"Enter 1 if you see your card else enter 0"<<endl;
cin>>k;
if(k==0)
    cout<<"you have selected: "<<b[2]<<endl;
else
{
 cout<<b[0]<<" ";
cout<<endl;
cout<<"Enter 1 if you see your card else enter 0"<<endl;
cin>>k;
if(k==0)
    cout<<"you have selected: "<<b[1]<<endl;
else
    cout<<"you have selected: "<<b[0]<<endl;
}
}
if(k!=0  && k!=1)
    cout<<"wrong"<<endl;
return 0;
}
