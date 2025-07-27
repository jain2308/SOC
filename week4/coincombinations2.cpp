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
    const ll MOD = 1e9+7;
    ll n,x;
    cin >> n >> x;
    vi coins(n);
    in(coins, n);
    vi sols(x+1, 0LL);
    sols[0] = 1LL;
    for(auto c : coins){
    for(int i=c; i <=x; i++){
            if(i-c>=0){
                sols[i]+=sols[i-c];
                sols[i]%=MOD;
            }
        }
    }
    cout << sols[x] << endl;
    return 0;
}
