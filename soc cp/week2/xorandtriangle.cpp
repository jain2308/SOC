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
        int x;
        cin >> x;
        int ans = -1;
        for(int i=0;i < 30;i++){
            for(int j=0;j < 30;j++){
                int y = (1 << i) | (1 << j);
                if(y < x && x + y > (x ^ y) && y + (x ^ y) > x){
                    ans = y;
                    break;
                }
            }
            if(ans != -1) break;
        }
        cout << ans << endl;
    }
    return 0;
}
// Not completely proved yet but works.