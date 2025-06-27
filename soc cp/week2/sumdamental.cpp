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
        int n, x;
        cin >> n >> x;
        int c = __builtin_popcount(x);
        if( n <= c){
            cout << x << endl;
            continue;
        }
        else{
            if(n ==1 && x == 0){
                cout << -1 << endl;
                continue;
            }
            if(x==1){
                if(n%2==1){
                    cout << n << endl;
                }
                else{
                    cout << n + 3 << endl;
                }
                continue;
            }
            if(x==0){
                if(n%2==0){
                    cout << n << endl;
                }
                else{
                    cout << n + 3 << endl;
                }
                continue;
            }
            if((n-c)%2 == 1){
                cout << x + n - c+1 << endl;
            }
            else{
                cout << x + n - c << endl;
            }
        }
    }
    return 0;
}
