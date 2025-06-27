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
using vi = vector<ll>;
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
        map <ll, ll> freq;
        int n,k;
        cin >> n >> k;
        vi arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            arr[i] = arr[i] % k;
            if(arr[i] != 0){
                arr[i] = arr[i] -k;
                freq[arr[i]]++;
            }
        }
        ll count_final =1;
        ll min_element = 0;
        vector<bool> visited(k, false);
        for(auto x : freq){
            ll y = x.first - k*(x.second-1);
            min_element = min(min_element, y);
        }
        count_final += abs(min_element);
        if(count_final == 1)count_final = 0;
        cout << count_final << endl;
    }
    return 0;
}
// This was a very good problem. Anayse it properly.