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
const ll N = 2*100000+10;
vector<ll> BIT(N);
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
void update(ll i, ll val, ll n) {
    while (i <= n) {
        BIT[i] += val;
        i += (i & -i);
    }
}

// Prefix query
ll query(ll i) {
    ll sum = 0;
    while (i > 0) {
        sum += BIT[i];
        i -= (i & -i);
    }
    return sum;
}

// Range add: add val to all elements in [l, r]
void range_add(ll l, ll r, ll val, ll n) {
    update(l, val, n);
    update(r + 1, -val, n);
}
// Driver code
int32_t main(){
for(ll i=0;i<N;i++){
    BIT[i]=0;
}
    fast_io();
    ll ans = 0;
    ll n,q;
    cin >> n >> q;
    vi a(n);
    in(a, n);
    for(ll j=0;j<q;j++){
        ll l,r;
        cin >> l >> r;
        range_add(l,r,1,n);
    }
   vector<ll> freq;
   for(ll i =0;i<n;i++){
    freq.pb(query(i+1));
   }
    sort(all(freq), greater<ll>());
    sort(all(a), greater<ll>());
    for(ll i=0;i<n;i++){
        ans+=a[i]*freq[i];
    }
    cout << ans << endl;
}
// This solution uses binary index trees. Learnt about them.
// I have not completely understood these yet.