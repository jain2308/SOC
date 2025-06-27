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

    int n;
    cin >> n;
    vi start(n);
    vi end(n);
    int max_frequency = 0;
    rep(i, 0, n) {
        cin >> start[i] >> end[i];
    }
    sort(all(start));
    sort(all(end));
    for(int i = 0, j = 0, current_frequency = 0; i < n && j < n;) {
        if (start[i] < end[j]) {
            current_frequency++;
            max_frequency = max(max_frequency, current_frequency);
            i++;
        } else {
            current_frequency--;
            j++;
        }
    }
    cout << max_frequency << endl;
    return 0;
}