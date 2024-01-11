#include <bits/stdc++.h>
#include <iostream>
#include <istream>

using namespace std;
#define f first
#define s second
#define endl '\n'
#define sp << " " <<
#define pb push_back
#define MOD 1000000007
#define fora(a) for (auto u : a)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define rall(a) (a).rbegin(), (a).rend()
#define test                                                                   \
  int tc;                                                                      \
  cin >> tc;                                                                   \
  while (tc--)
#define forn(i, n) for (auto i = 0; i < n; i++)
#define printv(a)                                                              \
  {                                                                            \
    for (auto u : a)                                                           \
      cout << u << " ";                                                        \
    cout << endl;                                                              \
  }
#define printm(a)                                                              \
  {                                                                            \
    for (auto u : a)                                                           \
      cout << u.f sp u.s << endl;                                              \
  }
#define op()                                                                   \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define fori(a, b, c)                                                          \
  {                                                                            \
    for (a = c.begin(); a != b; a++)                                           \
      cout << *a << " ";                                                       \
    cout << endl;                                                              \
  }
#define fraction(a)                                                            \
  cout.unsetf(ios::floatfield);                                                \
  cout.precision(a);                                                           \
  cout.setf(ios::fixed, ios::floatfield);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int>::iterator vit;
typedef set<int> si;
typedef map<int, int> mii;
const double eps = 1e-9;
#define sc set<char>
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64
    rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0, lim - 1);
  return uid(rang);
}
int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);
#define read(type) readInt<type>()
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================
string to_upper(string a) {
  for (int i = 0; i < (int)a.size(); ++i)
    if (a[i] >= 'a' && a[i] <= 'z')
      a[i] -= 'a' - 'A';
  return a;
}
string to_lower(string a) {
  for (int i = 0; i < (int)a.size(); ++i)
    if (a[i] >= 'A' && a[i] <= 'Z')
      a[i] += 'a' - 'A';
  return a;
}
bool prime(ll a) {
  if (a == 1)
    return 0;
  for (int i = 2; i <= round(sqrt(a)); ++i)
    if (a % i == 0)
      return 0;
  return 1;
}
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
template <class T> void print_v(vector<T> &v) {
  cout << "{";
  for (auto x : v)
    cout << x << ",";
  cout << "\b}";
}

vi g[N];
int a[N];

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1)
      result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m) {
  int i, u, v;
  while (m--) {
    cin >> u >> v;
    u--, v--;
    g[u].pb(v);
    g[v].pb(u);
  }
}

void dfs(int u, int par) {
  for (int v : g[u]) {
    if (v == par)
      continue;
    dfs(v, u);
  }
}

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
  std::ifstream in("input");
  std::streambuf *cinbuf = std::cin.rdbuf();
  std::cin.rdbuf(in.rdbuf());
  freopen("outputProgram.txt", "w", stdout);
#endif
  int tc;
  cin >> tc;
  while(tc--){

  }
  return 0;
}