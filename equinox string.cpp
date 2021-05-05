#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
  ll n,a,b;
  string str;
  ll pa=0,pb=0;     ll ctr = 0 ;
  cin>>n>>a>>b;
  while(n--)
  {
    cin>>str;
if(str[0]=='E'||str[0]=='Q'||str[0]=='U'||str[0]=='I'
||str[0]=='N'||str[0]=='O'||str[0]=='X')
    pa = pa + a ;
    else
    pb = pb + b ;
  }
  if(pa>pb)
  cout<<"SARTHAK"<<endl;
  else if(pb>pa)
  cout<<"ANURADHA"<<endl;
  else if(pa=pb)
  cout<<"DRAW"<<endl;
}
int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
    int t ;
    cin>>t;
    while(t--)
    {
      solve();
		}
		return 0 ;
}