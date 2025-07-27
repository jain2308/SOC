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
    const ll MOD = 1e9+7;
    vector<ll> numbers = {1,2,3,4,5,6};
    vector<ll> sols(1e6+1, 0);
    sols[0]=1;
    for(int i = 1; i<=1e6;i++){
        for(auto n : numbers){
            if(i-n>=0){
                sols[i] += sols[i-n];
                sols[i]%=MOD;
            }
        }
    }
    ll n;
    cin >> n;
    cout << sols[n] << endl;
    return 0;
}
