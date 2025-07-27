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
const ll MOD = 1e9+7;
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// Driver code
int32_t main() {
    fast_io();
    ll n;
    cin >> n;
    vector<vector<char>> inp(n, vector<char>(n));
    for(ll i=0; i<n;i++){
        for(ll j=0;j<n;j++){
            cin >> inp[i][j];
        }
    }
    if(inp[0][0] == '*' || inp[n-1][n-1] == '*'){
        cout << 0 <<endl;
        return 0;
    }
        vector<vector<ll>> sols(n, vector<ll>(n));
        sols[0][0] = 1;
        for(ll i=1; i <n; i++){
            if(inp[0][i-1] == '*') sols[0][i] = 0;
            else sols[0][i] = sols[0][i-1];
        }
        for(ll i = 1; i< n ; i++){
            if(inp[i-1][0] == '*') sols[i][0] = 0;
            else sols[i][0] = sols[i-1][0];
        }
        for(ll i = 1; i < n; i++){
            for(ll j=1; j< n ;j++){
                if(inp[i-1][j]=='*' && inp [i][j-1] == '*')sols[i][j]=0;
                else if(inp[i-1][j]=='*') sols[i][j] = sols[i][j-1];
                else if(inp[i][j-1] == '*') sols[i][j]= sols[i-1][j];
                else sols[i][j]= (sols[i-1][j] + sols[i][j-1])%MOD;
            }
        }
        cout << sols[n-1][n-1] << endl;
    return 0;
}
