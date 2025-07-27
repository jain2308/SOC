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
using vi = vector<int>;
using pii = pair<int, int>;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
const ll MOD = 1e9 + 7;
// Driver code
int32_t main() {
    fast_io();
    int n;
    cin >> n;
    vector<ll>dp((n*(n + 1)/4)+1, 0);
    ll sum = n*(n + 1) / 2;
    if (sum % 2 != 0) {
        cout << 0 << endl;
    }
    else {
        sum /= 2;
        dp[0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = sum; j >= i; --j) {
                dp[j] = (dp[j] + dp[j - i]) % MOD;
            }
        }
        cout << (dp[sum] * 500000004LL) % MOD << endl;
    }
    return 0;
}
