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
        int n;
        cin >> n;
        cout << (min(9,n) + min(9,n/11) + min(9,n/111) + min(9,n/1111) + min(9,n/11111) + min(9,n/111111) + min(9,n/1111111) + min(9, n/11111111)+min(9,n/111111111)) << endl;
    }
    return 0;
}
