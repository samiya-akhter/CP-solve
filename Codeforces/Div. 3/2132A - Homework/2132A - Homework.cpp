#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {
    int n;
    cin>>n;
    string a,b,c;
    cin>>a;
    int m;
    cin>>m;
    cin>>b>>c;
    for(int i=0;i<m;i++){
        if(c[i]=='V'){
            a=b[i]+a;
        }
        else{
            a=a+b[i];
        }
    }
    cout<<a<<endl;
    
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