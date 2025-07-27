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
    int n;
    cin >> n;
    vi v(n);
    in(v, n);
    int sum = accumulate(all(v), 0);
    vector<bool> dp(sum+1, 0);
    dp[0] = true;
    for(auto x : v){
        for(int j = sum; j >= x; --j) {
            if(dp[j - x]) {
                dp[j] = true;
            }
        }
    }
    vi sums;
    for(int i = 1; i <= sum; ++i) {
        if(dp[i]) {
            sums.pb(i);
        }
    }
    cout << sums.size() << endl;
    for(auto x : sums) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
