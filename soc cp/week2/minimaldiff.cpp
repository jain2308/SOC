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
        cin >> n;
        vi a(n);
        in(a,n);
        vector<vector<int>>pos(n);
        rep(i,0,n){
            pos[a[i]-1].pb(i);
        }
        vector<int>possibles;
        for(int i =0;i<n;i++){
            if(pos[i].size() > 1){
                for(int j=1;j<pos[i].size();j++){
                    possibles.pb(pos[i][j] - pos[i][j-1]+1);
                }
            }
        }
        if(possibles.empty()){
        cout << -1 << endl;
        }
        else{
            cout << *min_element(all(possibles))<<endl;
        }
    }
    return 0;
}
