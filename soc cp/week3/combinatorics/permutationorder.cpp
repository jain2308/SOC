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
    vi fact(21);
    fact[0] = 1;
    for (ll i = 1; i < 21; ++i) {
        fact[i] = fact[i - 1] * i;
    }
    ll testcases;
    cin >> testcases;
    rep(i, 0, testcases) {
        ll x;
        cin >> x;
        if(x == 1){
            set<ll> s;
            ll n, k;
            cin >> n >> k;
            for(ll j=1;j<=n;j++){
                s.insert(j);
            }
            k--;
            while(!s.empty()){
            ll index = k/fact[n-1];
            k = k % fact[n-1];
            auto it = s.begin();
            advance(it, index);
            cout << *it << " ";
            s.erase(it);
            n--;
            }
            cout << endl;
        }
        else{
            ll n;
            cin >> n;
            vi p(n);
            in(p, n);
            set<ll> s;
    for (ll j = 1; j <= n; ++j)
        s.insert(j);
        ll rank = 1;
    for (ll i = 0; i < n; ++i) {
        auto it = s.lower_bound(p[i]);
        ll smaller = distance(s.begin(), it);
        rank += smaller * fact[n - i - 1];
        s.erase(it);
    }
    cout << rank << endl;
    }
}
    return 0;
}
