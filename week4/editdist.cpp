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
    string a;
    string b;
    cin >> a;
    cin >> b;
    int n = a.size();
    int m = b.size();
    vector<vector<int>> sols(n+1, vector<int>(m+1));
    for(int i=0;i<=n;i++){
        sols[i][0] = i;
    }
    for(int i=0;i<=m;i++){
        sols[0][i] = i;
    }
    for(int i =1 ; i<=n;i++){
        for(int j=1;j<=m;j++){
            sols[i][j] = min(1+sols[i-1][j], 1+sols[i][j-1]);
            if(a[i-1] == b[j-1]){
                sols[i][j]= min(sols[i][j], sols[i-1][j-1]);
            }
            else{
                sols[i][j] = min(sols[i][j], 1+sols[i-1][j-1]);
            }
        }
    }
    cout << sols[n][m] << endl;
    return 0;
}
