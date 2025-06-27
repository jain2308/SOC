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
    rep(i, 0, testcases) {
        ll K = 1000000007;
        ll a,b,c;
        cin >> a >> b >> c;
        ll x = 1LL;
        while(c>0){
            if(c%2==1){
                x = (x * b) % (K-1);
            }
            c/=2LL;
            b = (b * b) % (K-1);
        }
        ll ans = 1LL;
        if(a==0 && x==0){
            cout << 1 << endl;
            continue;
        }
        while(x>0){
            if(x%2==1){
                ans = (ans * a) % K;
            }
            x/=2LL;
            a = (a * a) % K;
        }
        cout << ans << endl;
    }
    return 0;
}
