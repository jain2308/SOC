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
    ll n, x;
    cin >> n >> x;
    vi prices(n);
    in(prices, n);
    vi pages(n);
    in(pages, n);
    vi sols(x+1, 0);
    for(int j=n-1;j>=0;j--){
        for(int i=x;i >=prices[j];i--){
                sols[i] = max(sols[i], pages[j]+sols[i-prices[j]]);
        }
    }
    cout << sols[x] << endl;
    return 0;
}
// Revise this probloem once.