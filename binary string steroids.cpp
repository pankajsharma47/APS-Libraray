#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
    cin>>n;
    string s;
    cin>>s;
    ll t0=0,t1=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            t1++;
        }
        else{
            t0++;
        }
    }
    vector<ll> vec;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                vec.push_back(i);
            }
            else{
                vec.push_back(n/i);
                vec.push_back(i);
            }
        }
    }
    ll ans = 1e9;
    for(auto fact:vec){
        vector<ll> f(fact);
        for(ll i=0;i<fact;i++){
            for(ll j=i;j<n;j+=fact){
                if(s[j]=='1'){
                    f[i]++;
                }
            }
        }
        ll req=n/fact;
        for(ll i=0;i<fact;i++){
            ll tt=req-f[i];
            tt+=(t1-f[i]);
            ans=min(ans,tt);
        }
 
    }
    cout<<ans<<endl;
    }
    return 0;
}