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
    vector<ll> firstpos(n);
    vector<ll> secondpos(n);
    ll res = 0;
    for(int i=1;i<=2*n;i++){
        ll x;
        cin >> x;
        if(firstpos[x-1] == 0) firstpos[x-1] = i;
        else secondpos[x-1] = i;
    }
    res += firstpos[0] + secondpos[0] - 2;
    for(int j=1; j<n;j++){
        res += abs(firstpos[j] - firstpos[j-1]);
        res += abs(secondpos[j] - secondpos[j-1]);
    }
    cout << res << endl;
    return 0;
}
