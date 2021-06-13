#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  
  ll t;
  cin >> t;
  while (t--)
  {
      ll n;
      cin >> n;
      vector<pair<ll, ll>> x;
      vector<pair<ll, ll>> y;
      multiset<ll> X;
      multiset<ll> Y;
      ll br1 = 0;
      ll br2 = 0;
      ll br1mx = 0;
      ll br1mn = LONG_MAX;
      for (ll i = 0; i < n; ++i)
      {
          ll a, b;
          cin>>a>>b;
          x.push_back({a, b});
          y.push_back({b, a});
          X.insert(a);
          Y.insert(b);
      }
      sort(x.begin(), x.end());
      sort(y.begin(), y.end());
      ll ln1 = 0;
      ll ln2 = 0;
      ll ln1mx = 0;
      ll ln1mn = LONG_MAX;
      ll AREA = LONG_MAX;

      for (ll i = 0; i < n - 1; ++i)
      {
          br1mx = max(br1mx, y[i].second);
          br1mn = min(br1mn, y[i].second);
          br1 = br1mx - br1mn;
          auto it = X.find(y[i].second);
          X.erase(it);
          br2 = *X.rbegin() - *X.begin();
          ll Ar_new = (y[i].first - y[0].first) * br1 +
                        (y[n - 1].first - y[i + 1].first) * br2;
          AREA = min(AREA, Ar_new);
      }
      for (ll i = 0; i < n - 1; ++i)
      {

          ln1mx = max(ln1mx, x[i].second);
          ln1mn = min(ln1mn, x[i].second);
          ln1 = ln1mx - ln1mn;
          auto it = Y.find(x[i].second);
          Y.erase(it);
          ln2 = *Y.rbegin() - *Y.begin();
          ll Ar_new = (x[i].first - x[0].first) * ln1 +
                        (x[n - 1].first - x[i + 1].first) * ln2;
          AREA = min(AREA, Ar_new);
      }

      if (AREA == LONG_MAX)
          AREA = 0;
      cout << AREA << endl;
    
  }
	return 0;
}