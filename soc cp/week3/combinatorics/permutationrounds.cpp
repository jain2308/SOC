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
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a/gcd(a, b) * b;
}
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// Driver code
int32_t main() {
    fast_io();
    ll n;
    cin >> n;
    vi a(n+1);
    for(ll i=1;i<=n;i++){
        cin >> a[i];
    }
    vector<bool> done(n+1, false);
    ll ans = 1;
    rep(i, 1, n + 1) {
        if(!done[i]){
            ll pos = i;
            ll length = 0;
            while(!done[pos]){
                done[pos] = true;
                pos = a[pos];
                length++;
        }
        ans = lcm(ans, length)%MOD;
    }
}
cout << ans << endl;
return 0;
}