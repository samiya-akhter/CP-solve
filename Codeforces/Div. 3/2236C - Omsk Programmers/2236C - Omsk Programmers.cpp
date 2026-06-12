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

  int a,b,x;
  cin>>a>>b>>x;
  int cnt=0;
  if(a==b){
    cout<<0<<endl;
    return;
  }

  if(abs(a-b)==1){
    cout<<1<<endl;
    return;
  }

  if(x==1){
    cout<<abs(a-b)<<endl;

    return;

  }
  int res=abs(a-b);
  while(a!=b){
    
    if(a>b){
      a/=x;
      cnt++;
    }
    else {
      b/=x;
      cnt++;
    }
    res=min(res,cnt+abs(a-b));
  }

  cout<<res<<endl;

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