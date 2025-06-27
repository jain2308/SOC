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
    rep(i, 0, testcases) {
        ll n, k;
        cin >> n >> k;
        ll ans = 1;
        for(ll i =0 ;i<k;i++){
            ans*=n;
            ans%=1000000007;
        }
        cout << ans << endl;
    }
    return 0;
}
