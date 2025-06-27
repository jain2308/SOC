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
        unordered_set<int> elements;
        rep(i,0,n){
            int x;
            cin >> x;
            elements.insert(x);
        }
        if(elements.size()>k){
            cout << -1 << endl;
            continue;
        }
        int p = elements.size();
        cout << k*n << endl;
        int j =0;
        for(int i =0; i<n;i++){
            j=0;
            while(true){
            for(auto x : elements){
                cout << x << " ";
                j++;
                if(j>=k)break;
            }
            if(j>=k)break;
        }
        }
        cout << endl;
        }
    return 0;
}
