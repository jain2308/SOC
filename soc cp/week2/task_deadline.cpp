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
    vector<ll> duration(n);
    vector<ll> deadline(n);
    ll s = 0;
    rep(i, 0, n) {
        cin >> duration[i] >> deadline[i];
        s+=deadline[i];
    }
    sort(all(duration));
    for(int i = 0; i < n; i++) {
        s-= duration[i]*(n-i);
    }
    cout << s << endl;
    return 0;
}
