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
        int n;
        bool ans = true;
        cin >> n;
        vi a(4*n);
        in(a,4*n);
        sort(all(a));
        int x = a[0] * a[4*n-1];
        for(int i=0; i< 2*n;i++){
            if(i%2 == 1){
                if(a[i] != a [i-1] || a[4*n - i - 1] != a[4*n - i]){
                    ans = false;
                }
            }
            else{
                if(a[i] * a[4*n -i -1] != x) ans = false;
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
