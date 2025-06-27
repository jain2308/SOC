#include "bits/stdc++.h"
using namespace std;

// Typedefs and macros
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define in(v,n) rep(i, 0, n) { cin >> v[i]; }
#define out(v,n) rep(i, 0, n) { cout << v[i] << " "; } cout << endl;
using vi = vector<ll>;
using pii = pair<int, int>;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// Driver code
int32_t main() {
    fast_io();
    ll MOD = 1000000007LL;
    vi fact(2000001, 1);
    const int MAX = 2000001;
    fact[0] = 1;
    for (int i = 1; i < MAX; ++i)
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
    for (int i = MAX - 2; i >= 0; --i)
        invfact[i] = invfact[i + 1] * (i + 1) % MOD;
    rep(i, 0, 1) {
        int a, b;
        cin >> a >> b;
        int m = a + b -1;
        int n = a - 1;
        ll result = fact[m] * invfact[n] % MOD * invfact[m - n] % MOD;
        cout << result << endl;
    }
    return 0;
}
