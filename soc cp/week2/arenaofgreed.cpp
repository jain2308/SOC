#include "bits/stdc++.h"
using namespace std;

// Typedefs and macros
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define endl '\n'
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define in(v,n) rep(i, 0, n) { cin >> v[i]; }
#define out(v,n) rep(i, 0, n) { cout << v[i] << " "; } cout << endl;
using vi = vector<ll>;
using pii = pair<ll, ll>;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// Driver code
int32_t main() {
    fast_io();

    ll testcases;
    cin >> testcases;
    rep(i, 0, testcases) {
        ll N;
        cin >> N;
        ll ans = 0;
        bool turn = true;
        while(N>0){
            if(N%2==1){
                if(turn){ans++;
            }
            N--;
            }
            else if(N%4==2 || N==4){
                if(turn){
                    ans+=N/2;
                }
                N = N/2;
            }
            else{
                if(turn){
                    ans++;
                }
                N--;
            }
            turn = !turn;
        }
        cout << ans<<endl;
    }
    return 0;
}
