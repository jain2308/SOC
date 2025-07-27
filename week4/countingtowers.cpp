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
const ll MOD = 1e9+7;
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
ll mod_power(ll base, ll exponent, const ll MOD = 1e9+7){
    ll a =1;
    base %=MOD;
    while(exponent>0){
        if(exponent%2==1)a *= base;
        a%=MOD;
        exponent/=2;
        base = base*base;
        base%=MOD;
    }
    return a;
}
// Driver code
int32_t main() {
    fast_io();
    vector<vector<ll>> sols(1e6+1, vector<ll>(2));
    sols[1][0] = 1;
    sols[1][1] = 1;
    for(int i=2;i<=1e6;i++){
        sols[i][0] = ((2*sols[i-1][0])%MOD + sols[i-1][1])%MOD;
        sols[i][1] = (sols[i-1][0] + (4*sols[i-1][1])%MOD)%MOD;
    } 
    int testcases;
    cin >> testcases;
    rep(i, 0, testcases) {
        int n;
        cin >> n;
        cout << (sols[n][0]+sols[n][1])%MOD<<endl;
    }
    return 0;
}
