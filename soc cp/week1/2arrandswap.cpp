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
        int n,k;
        cin >> n >> k;
        vi a(n);
        vi b(n);
        in(a,n);
        in(b,n);
        sort(all(a));
        sort(all(b));
        for(int i=0;i<k;i++){
            if(a[i] < b[n-1-i]){
                swap(a[i], b[n-1-i]);
            }
            else{
                break;
            }
        }
        int sum = accumulate(all(a), 0);
        cout << sum << endl;
    }
    return 0;
}
