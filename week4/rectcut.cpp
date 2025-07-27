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
    int a, b;
    cin >> a >> b;
    int ans = INT16_MAX;
    vector<vector<int>> dp(a + 1, vector<int>(b + 1, INT16_MAX));
    for(int i=1;i<min(a+1, b+1);i++) {
        dp[i][i] = 0;
    }
    for(int i=1;i<=a;i++){
        dp[i][1] = i-1;
    }
    for(int i=1;i<=b;i++){
        dp[1][i] = i-1;
    }
     for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
             for (int k = 1; k < i; ++k) {
                    dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
                }
                for (int k = 1; k < j; ++k) {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
                }
            }
        }
        ans = dp[a][b];
    cout << ans << endl;
    return 0;
}
