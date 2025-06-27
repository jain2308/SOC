#include "bits/stdc++.h"
using namespace std;

// Typedefs and macros
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define endl '\n'
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define in(v,n) rep(i, 0, n) { cin >> v[i]; }
#define out(v,n) rep(i, 0, n) { cout << v[i] << " "; } cout << endl;
using vi = vector<ll>;
using pii = pair<ll, ll>;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// Driver code
int32_t main() {
    fast_io();

    ll testcases;
    cin >> testcases;
    ll MOD = 1000000007LL;
    const ll MAX = 2000001;
    vi fact(2000001, 1);
    fact[0] = 1;
    for (ll i = 1; i < MAX; ++i)
        fact[i] = fact[i - 1] * i % MOD;
    vi invfact(MAX);
    invfact[MAX - 1] = 1;
    ll a = fact[MAX - 1], b = MOD - 2;
    while (b > 0) {
        if (b % 2 == 1) {
            invfact[MAX - 1] = (invfact[MAX - 1] * a
                            ) % MOD;
        }
        b /= 2;
        a = (a * a) % MOD;
    }
    for (ll i = MAX - 2; i >= 0; --i)
        invfact[i] = invfact[i + 1] * (i + 1) % MOD;
    rep(i, 0, testcases) {
        ll a, b;
        cin >> a >> b;
        ll result = fact[a] * invfact[b] % MOD * invfact[a - b] % MOD;
        cout << result << endl;
    }
    return 0;
}
