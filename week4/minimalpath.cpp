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
    int a;
    cin >> a;
    vector<vector<char>> v(a, vector<char>(a));
    vector<vector<string>> dp(a, vector<string>(a));
    rep(i, 0, a) {
        rep(j, 0, a) {
            cin >> v[i][j];
        }
    }
    dp[0][0] = string(1, v[0][0]);
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            if(i==0 && j==0) continue;
            if(i==0){
                dp[i][j] = dp[i][j-1] + string(1, v[i][j]);
            } else if(j==0){
                dp[i][j] = dp[i-1][j] + string(1, v[i][j]);
            } else {
                if(dp[i-1][j] < dp[i][j-1]) {
                    dp[i][j] = dp[i-1][j] + string(1, v[i][j]);
                } else {
                    dp[i][j] = dp[i][j-1] + string(1, v[i][j]);
                }
            }
        }
    }
    cout << dp[a-1][a-1] << endl;
    return 0;
}
