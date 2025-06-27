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
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    in(a, n);
    in(b, m);
    sort(all(a));
    sort(all(b));
    int count =0;
    for(int i=0, j=0; i<n && j<m;){
        if(a[i]-k <= b[j] && a[i]+k >= b[j]){
            count++;
            i++;
            j++;
            continue;
        }
        if(i == n-1){
            j++;
            continue;
        }
        if(j == m-1){
            i++;
            continue;
        }
        if(a[i]-k > b[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout << count << endl;
    return 0;
}
