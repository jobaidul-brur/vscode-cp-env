#pragma GCC diagnostic ignored "-Wunused-variable"

#include <bits/stdc++.h>

#define endl "\n"
#define EPS 1E-9
#define PI acos(-1)
#define sq(x) ((x) * (x))
#define sz(v) (ll)(v).size()
#define ODD(x) (((x) & 1LL) ? (1) : (0))
#define all(v) (v).begin(), (v).end()
#define LOOP(i, a, b) for (i = (a); i <= (b); ++i)
#define RLOOP(i, a, b) for (i = (a); i >= (b); --i)
#define f0(i, n) LOOP(i, 0, (n) - 1)
#define f0r(i, n) RLOOP(i, (n) - 1, 0)
#define f1(i, n) LOOP(i, 1, (n))
#define f1r(i, n) RLOOP(i, (n), 1)
#define fill0(a) memset(a, 0, sizeof(a))
#define UNIQUE(v) (v).erase(unique(all(v)), (v).end())

using namespace std;

typedef uint64_t ull;
typedef int64_t ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;
#define int long int

const ll maxN = 1LL << 20, maxB = 320, INF = 4557430888798830399;
const ll maxA = 1e6 + 10, MOD = 1e9 + 7, mINF = -4557430888798830400;
const int INF_I = 2139062143, mINF_I = -2139062144;

// int row, column;
ll n, k, m;
string s, t, str;

ll arr[maxN + 10];

void solution()
{
    ll i, j, a, b, c, d, x, y, z;

    cin >> n;
    f0(i, n) cin >> arr[i];
}

signed main()
{
#ifndef _DEBUG
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#endif // _DEBUG
    cout.precision(15), cout << fixed;
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "----------------------------------------\n\n";
    time_t start = clock();
#endif // _DEBUG

    // sieve(maxA);
    ll T = 1;
    cin >> T;
    for (ll tc = 1; tc <= T; tc++)
    {
        // cout << "Case "  << tc << ": ";
        solution(); // break;
    }
#ifdef _DEBUG
    cout << "\n----------------------------------------\n";
    cerr << "--- " << 1000.0 * (clock() - start) / CLOCKS_PER_SEC << " ms ---\n";
#endif // _DEBUG
    return 0;
}
