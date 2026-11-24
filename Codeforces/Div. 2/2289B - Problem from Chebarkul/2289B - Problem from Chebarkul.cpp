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
  int n,k;
  cin>>n>>k;
  vector <int> v(n), run(n);
  vin(v);
  int window_size = n - k + 1;
  run[n-1]=1;
  for(int i=n-2;i>=0;i--){
    if(v[i]==v[i+1]) run[i]=run[i+1]+1;
    else run[i]=1;
  }
  int cnt=0;
  for(auto a:run){
    if(a>=window_size) cnt++;
  }

  cout<<cnt<<endl;

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