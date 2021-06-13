#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int isInteger(long double N)
{
    ll X = N;
    long double temp2 = N - X;
    if (temp2 > 0)
        return 0;
    else
    return 1;
}
ll ari_pro(ld a, ld d , ld x)
{
  long double n = ((x-a)/d) +1;
//  cout<<n<<endl;
  int flag =  isInteger(n);
  if(flag==0)
  return (ll)n+1;
  else
  return ll(n);
}
ll ari_pro1(ld a, ld d , ld x)
{
  long double n = (x-a)/d +1;
  return (ll)n;
}
int main()
{
  
  int t ;
// t = 1 ;
   cin>>t;
   while(t--)
   {
  ll i=0,j=0,k=0;
  ld l,r;
  cin>>l>>r;
  ll ctr = 0 ;
  //int ct = 0 ;
  for(i = 1 ; i < sqrt(r) ; i++)
  { //ct = ct+1 ;
    ll a = i*i ;
    ll n1=0,n2=0;
    if(l>=a)
    n1 = ari_pro(a,2*i,l);
    if(r>=a)
    n2 = ari_pro1(a,2*i,r);
    else
    break;
    ctr = ctr + (n2-n1) ;
    if(n1!=0)
    ctr+=1 ;
  }
  cout<<ctr<<endl;
  
}

	return 0;
}