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
    int n;
    cin >> n;
    vi coins(n);
    in(coins, n);
    sort(all(coins));
    ll sum = 1;
    for (int i = 0; i < n; i++) {
        if (coins[i] > sum) {
            break;
        }
        sum += coins[i];
    }
    cout << sum << endl;
    return 0;
}
// I have not revised this code yet, but it should work correctly.
// The code finds the smallest sum that cannot be formed using the given coins.