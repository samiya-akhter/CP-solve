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

    int n;
    cin>>n;
    int cnt1=0;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1 )cnt1++;
    } 

   
    if(n%2==0)
    {
        int m=abs((n/2)-cnt1);

        if(m&1) cout<<no<<endl;
        else cout<<yes<<endl;

    }
    else cout<<no<<endl;




   
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
