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
    ll tpw = pow(2, 59);
    int testcases;
    cin >> testcases;
    rep(i, 0, testcases) {
        ll x, y;
        cin >> x >> y;
        if(x==y){
            cout << -1 << endl;
            continue;
        }
        cout << tpw - max(x, y) << endl;
    }
    return 0;
}
