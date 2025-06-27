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
    vi coins(n);
    in(coins, n);
    int sum = accumulate(all(coins), 0);
    sort(all(coins));
    int target = sum / 2;
    int next_sum = 0;
    for(int i=0;i<n;i++){
        next_sum += coins[n-1-i];
        if(next_sum > target){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}
