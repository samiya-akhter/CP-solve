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
  int n;
  cin>>n;
  map<int,int> num;
  vector <int> v;
  int b;
  for(int i=0;i<n;i++){
    cin>>b;
    num[b]++;
  }
  int cnt=0;
  for(auto m:num){
    if(m.second<3) cnt+=m.second;
    else cnt+=2;
    v.push_back(m.first);
  }

  sort(rall(v));

  deque <int> ans;
  for(int i=0;i<v.size();i++){
    if(num[v[i]]){
      ans.push_front(v[i]);
      num[v[i]]--;
    }
    while(num[v[i]]--){
      ans.push_back(v[i]);
    }
  }
  cout<<cnt<<endl;
  for(auto a:ans) cout<<a<<" ";
  cout<<endl;


  
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