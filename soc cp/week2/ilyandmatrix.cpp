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
    vector<ll>a(testcases);
    rep(i, 0, testcases) {
        cin >> a[i];
    }
    sort(all(a));
    ll ans = accumulate(all(a) , 0LL);
    int n =0;
    int b = testcases;
    while(testcases >0){
        testcases/=4;
        if(!(testcases>0))break;
        n++;
    }
    int x =1;
    int coff = n;
    for(int i =1; i<=b/4; i++){
        ans += coff * a[b-i];
        if(i==x){
            x*=4;
            coff--;
        }
    }
    cout << ans << endl;
    return 0;
}
