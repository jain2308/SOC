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
using pii = pair<int,ll>;

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
       ll n;
        cin >> n;
        vi a(n);
        in(a, n);
        vi b(32, 0);
        for(int j = 0; j < n; j++) {
            {
                b[31 - __builtin_clz(a[j])] += 1;
            }
    }
       ll ans = 0;
        for(int j = 0; j < 32; j++) {
            if(b[j] > 1) {
                ans += (b[j] * (b[j] - 1)) / 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
