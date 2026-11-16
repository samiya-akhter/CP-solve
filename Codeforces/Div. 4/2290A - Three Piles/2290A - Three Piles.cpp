#include <bits/stdc++.h>
// pandame
using namespace std;

#define int long long
#define endl "\n"
#define Y "YES"
#define N "NO"
#define vin(v) for(auto &x : v) cin >> x
#define vout(v) for(auto x : v) cout << x << " "

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

const int INF = 1e18;
const int MAXN = 200005;
const int MOD = 1e9 + 7;

int gcd(int a, int b){ return b ? gcd(b, a % b) : a; }
int lcm(int a, int b){ return a / gcd(a,b) * b; }


void solve() {
  vector <int> v(3);
  for(auto &a:v) cin>>a;
  sort(all(v));
  cout<<((v[1]-v[0]==1 && v[2]-v[1]==1)? Y:N)<<endl;
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }
  
  return 0;
}