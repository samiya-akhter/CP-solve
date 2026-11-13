#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define no "n"
#define yes "y"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

bool isPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return 0;
  return n > 1;
}

vector<int> get_divisors(int n)
{
  vector<int> res;
  for (int i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      res.push_back(i);
      if (i * i != n)
        res.push_back(n / i);
    }
  }
  sort(all(res));
  return res;
}

void solve()
{
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> v;
  int a;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    v.push_back({a, i + 1});
  }
  sort(all(v));
  int p = 0, q = n - 1;
  int res;
  bool flag = false;
  while (p < q)
  {
    res = x - v[q].first;
    if (v[p].first == res)
    {
      cout << v[p].second << " " << v[q].second;
      flag = true;
      break;
    }
    if (v[p].first > res)
    {
      q--;
    }
    else
      p++;
  }
  if (!flag)
  {
    cout << "IMPOSSIBLE";
  }
}

int32_t main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  // cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
