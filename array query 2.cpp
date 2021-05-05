#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int n,i,j=-1,k=-1,la=-1,c=0,m,tmax=0,max=LONG_LONG_MIN;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
     tmax=tmax+a[i];
        if(tmax<a[i])
        {
            tmax=a[i];
            j=i;
        }
        if(max<tmax)
        {
            max=tmax;
            k=j;
            la=i;
        }
    }
    cout<<max<<endl;

    if(la==n-1 && k==-1)
    {
        cout<<0<<endl;
        return 0;
    } 
    tmax=0;
    max=LONG_LONG_MIN;
    vector<long long int>va;
    for(i=0;i<k;i++)
        va.push_back(a[i]);
    for(i=la+1;i<n;i++)
        va.push_back(a[i]);
    for(i=0;i<va.size();i++)
    {
        tmax=tmax+va[i];
        if(tmax<va[i])
            tmax=va[i];
        if(max<tmax)
            max=tmax;
    }
    cout<<max<<endl;
    return 0;
}
