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

// Driver code
int32_t main() {
    fast_io();

    int testcases;
    cin >> testcases;
    ll MOD = 1000000007LL;
    rep(i, 0, testcases) {
        ll a, b;
        cin >> a >> b;
        ll ans = 1;
        if(a==0 && b==0){
            cout << 1 << endl;
            continue;
        }
        while(b>0){
            if(b%2==1){
                ans = (ans * a) % MOD;
            }
            b/=2LL;
            a = (a * a) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
