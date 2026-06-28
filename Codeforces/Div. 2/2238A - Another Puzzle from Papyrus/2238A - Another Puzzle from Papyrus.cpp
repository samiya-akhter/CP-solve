#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define no "NO"
#define yes "YES"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int gcd(int a, int b){ return b ? gcd(b, a % b) : a; }
int lcm(int a, int b){ return a / gcd(a,b) * b; }

bool isPrime(int n){for(int i=2;i*i<=n;i++) if(n%i==0) return 0; return n>1;}

vector < int > get_divisors(int n) {
    vector < int > res;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            if (i * i != n) res.push_back(n / i);
        }
    }
    sort(all(res));
    return res;
}

void solve() {
int n,c;
cin>>n>>c;
vector<int>a(n),b(n);
for(auto &a:a) cin>>a;
for(auto &a:b) cin>>a;
int ans=INF;
int cost1=0;
bool ok1 = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            ok1 = false;
            break;
        }
        cost1 += a[i] - b[i];
    }
sort(all(a));
sort(all(b));
int cost2 = c;
bool ok2 = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            ok2 = false;
            break;
        }
        cost2 += a[i] - b[i];
    }


    if (ok1) ans = min(ans, cost1);
    if (ok2) ans = min(ans, cost2);

    if (ans == INF) cout << -1 << endl;
    else cout << ans <<endl;


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