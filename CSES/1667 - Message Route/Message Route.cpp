#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define Y "YES"
#define N "NO"
#define vin(v) for(auto &x : v) cin >> x
#define vout(v) for(auto x : v) cout << x << " "

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18;
const int MAXN = 200005;
const int MOD = 1e9 + 7;

int gcd(int a, int b){ return b ? gcd(b, a % b) : a; }
int lcm(int a, int b){ return a / gcd(a,b) * b; }

bool isPrime(int n){for(int i=2;i*i<=n;i++) if(n%i==0) return 0; return n>1;}

int power(int a,int b){int ans=1;while(b){if(b&1)ans*=a;a*=a;b>>=1;}return ans;}


vector<int> adj[MAXN];
vector <int> visited;
map<int,int> par;


void bfs(int root){
  if(!visited[root]){
    queue <int> s;
    visited[root]=true;
    par[root]=-1;
    s.push(root);
    while(!s.empty()){
      int node = s.front();
      s.pop();

      for(auto w:adj[node]){
        if(!visited[w]){
          visited[w]=true;
          par[w]=node;
          s.push(w);
        }
      }
    }
  }
}
void solve() {
  int v,e;
  cin>>v>>e;
  visited.resize(v+1,false);
  int a,b;
  for(int i=0;i<e;i++){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  bfs(1);
  if(!visited[v]){
    cout<<"IMPOSSIBLE";
    return;
  }

  vector<int> path;
  for(int i=v;i>=1;i=par[i]){
    path.push_back(i);
  }

  reverse(all(path));
  cout<<path.size()<<endl;

  vout(path);

}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
 // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}