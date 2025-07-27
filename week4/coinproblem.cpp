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
    vector<int> coins = {1, 3, 4};
    vector<int> values(1e6);
    vector<int>first(1e6);
    values[0] = 0;
    for (int x = 1; x < 1e6; x++) {
            values[x] = INT16_MAX;
            for (auto c : coins) {
            if (x-c >= 0 && values[x-c]+1 < values[x]) {
                values[x] = values[x-c]+1;
                first[x] = c;
            }
    }   
}
    rep(i, 0, testcases) {
        int x;
        cin >> x;
        cout << values[x]<<endl;
        while(x>0){
            cout << first[x] << " ";
            x-=first[x];
        }
    }
    return 0;
}
