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
    ll n;
    cin >> n;
    vi v(n);
    in(v, n);
    vector<vector<ll>> dp(n+2, vector<ll>(n+2, 0));
    for(ll i=n;i>=1;i--){
        for(ll j=i; j<=n;j++){
            if(i==j){
                dp[i][j] = v[i-1];
            } else {
                dp[i][j] = max(v[i-1] - dp[i+1][j], v[j-1] - dp[i][j-1]);
            }
        }
    }
    ll diff = dp[1][n];
    ll sum = accumulate(all(v), 0LL);
    ll ans = (sum + diff) / 2;
    cout << ans << endl;
    return 0;
}
