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
  vector<int>a(n),b(n);
  int p;
  int odd_a=0 , odd_b=0;
  bool ok=false;
  for(auto &m:a){
    cin>>p;
    m=p;
    if(p&1) odd_a++;
  }
  for(auto &m:b){
    cin>>p;
    m=p;
    if(p&1) odd_b++;
  }
  int even_a=n-odd_a;
  int even_b=n-odd_b;
  if(odd_a==odd_b) ok=true;
  else if(odd_a>odd_b){
    if(!(k&1)) ok=true;
  }
  else{
    if(k&1) ok=true;
  }
  
 cout<<((ok)?Y:N)<<endl;
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