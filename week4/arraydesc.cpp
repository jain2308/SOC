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
const ll MOD = 1e9+7;
// Driver code
int32_t main() {
    fast_io();

    int n;
    cin >> n;
    int m;
    cin >> m;
    vi arr(n);
    rep(i, 0, n) {
        cin >> arr[i];
    }
        vector<vector<int>> dp(n, vector<int>(m+1, 0));
    if(arr[0] == 0){
        for(int i=1;i <=m;i++){
            dp[0][i] = 1;
        }
    }
    else{
        dp[0][arr[0]] = 1;
    }
    for(int i = 1;i<n;i++){
        if(arr[i]!=0){
            int k = arr[i];
            for(auto l : {k-1, k, k+1}){
                if(l>=1 && l<=m){
                dp[i][arr[i]] += dp[i-1][l];
                dp[i][arr[i]]%=MOD;
                }
            }
        }
        else{
            for(int k=1; k<=m;k++){
                for(auto l : {k-1, k, k+1}){
                if(l>=1 && l<=m){
                dp[i][k] += dp[i-1][l];
                dp[i][k]%=MOD;
                }
            }
        }
    }
}
    int ans =0;
    if(arr[n-1]!=0){
        ans = dp[n-1][arr[n-1]];
    }
    else{
        for(int i=1;i<=m;i++){
            ans+=dp[n-1][i];
            ans %= MOD;
        }
    }
    cout << ans << endl;
    return 0;
}
