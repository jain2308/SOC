#include "bits/stdc++.h"
using namespace std;

// Typedefs and macros
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define endl '\n'
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define in(v, n) \
    rep(i, 0, n) { cin >> v[i]; }
#define out(v, n)                         \
    rep(i, 0, n) { cout << v[i] << " "; } \
    cout << endl;
using vi = vector<ll>;
using pii = pair<ll, ll>;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// Driver code
int32_t main()
{
    fast_io();
    ll n;
    cin >> n;
    vi a(n);
    in(a, n);
    vi b(20, 0);
    for (ll j = 0; j < n; j++)
    {
        for (ll i = 0; i < 20; i++)
        {
            if (a[j] & (1 << i))
            {
                b[i]++;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        a[i] = 0;
        for (ll j = 0; j < 20; j++)
        {
            if (b[j] > 0)
            {
                a[i] += (1 << j);
                b[j]--;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i] * a[i];
    }
    cout << ans << endl;
    return 0;
}
