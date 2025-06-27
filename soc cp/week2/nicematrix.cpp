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
        ll ans = 0;
        ll rows, columns;
        cin >> rows >> columns;
        vector<vector<ll>> matrix(rows, vector<ll>(columns));
        for(ll i = 0; i<rows; i++){
            for(ll j=0;j < columns;j++){
                cin >> matrix[i][j];
            }
        }
        ll a = rows%2==0 ? rows/2 : (rows+1)/2;
        ll b = columns%2==0 ? columns/2 : (columns+1)/2;
        for(ll i = 0; i <a; i++){
            for (ll j =0; j<b ; j++){
                vi a;
                a.pb(matrix[i][j]); a.pb(matrix[rows-i-1][j])  ;a.pb(matrix[i][columns-j-1]); a.pb(matrix[rows-i-1][columns-j-1]);
                sort(all(a));
                ll s = (a[1] + a[2])/2;
                ans += abs(s - matrix[i][j]);
                ans += abs(s - matrix[rows-i-1][j]);
                ans += abs(s - matrix[i][columns-1-j]);
                ans += abs(s - matrix[rows-i-1][columns-j-1]);
            }
        }
        if(rows%2==1){
            ll x = rows/2;
            for (ll j =0; j<b ; j++){
                ll s = (matrix[x][j] + matrix[x][columns-j-1])/2;
                ans -= abs(s - matrix[x][j]);
                ans -= abs(s - matrix[x][columns-j-1]);
            }
        }
        if(columns%2==1){
            ll y = columns/2;
            for (ll j =0; j<a ; j++){
                ll s = (matrix[j][y] + matrix[rows-j-1][y])/2;
                ans -= abs(s - matrix[j][y]);
                ans -= abs(s-matrix[rows-j-1][y]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
