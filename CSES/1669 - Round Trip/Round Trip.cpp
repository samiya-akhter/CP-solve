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

vector<int> adj[MAXN];
vector <int> visited, idx;
map<int,int> par;
int cyc_s = -1, cyc_e = -1;

bool dfs(int root){
  stack <int> s;
  visited[root] = true;
  par[root] = -1;
  s.push(root);

  while(!s.empty()){
    int node = s.top();
    if(idx[node] == adj[node].size()){
      s.pop();
      continue;
    }

    int w = adj[node][idx[node]++];
    if(w == par[node]) continue;
    if(visited[w]){
      cyc_s = w;
      cyc_e = node;
      return true;
    }

    visited[w] = true;
    par[w] = node;
    s.push(w);
  }

  return false;
}

void solve() {
  int v,e;
  cin>>v>>e;
  visited.resize(v+1,false);
  idx.resize(v+1,0);
  int a,b;
  for(int i=0;i<e;i++){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  vector<int> path;
  for(int i = 1; i <= v; i++){
    if(!visited[i] && dfs(i) == true){
      path.push_back(cyc_s);
      for(int i = cyc_e; i != cyc_s; i = par[i]) path.push_back(i);
      path.push_back(cyc_s);
      break;
    }
  }

  if(path.size() == 0) cout << "IMPOSSIBLE";
  else {
    cout << path.size() << endl;
    vout(path);
  }
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;

  while (t--) {
    solve();
  }
  
  return 0;
}