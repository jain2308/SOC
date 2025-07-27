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
    vi coins(n);
    in(coins, n);
    vector<ll> solution(x+1, 1e7);
    solution[0] = 0;
    for(int i=1;i<=x;i++){
        for(auto c : coins){
            if(i-c>=0){
        solution[i] = min(solution[i], 1+solution[i-c]);
            }
        }
    }
    if(solution[x] == 1e7)cout << -1 << endl;
    else cout << solution[x] << endl;
    return 0;
}
