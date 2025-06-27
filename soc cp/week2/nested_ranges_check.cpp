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
    vector<tuple<int,int, int>> ranges;
    vi start(testcases);
    vi end(testcases);
    vector<bool> has_range(testcases, false);
    vector<bool> is_nested(testcases, false);
    int abhi_ka_max =0;
    rep(i, 0, testcases) {
        cin >> start[i] >> end[i];
        ranges.emplace_back(i,start[i], end[i]);
    }
    sort(all(ranges), [](const tuple<int,int,int>& a, const tuple<int,int,int>& b) {
        if(get<1>(a) == get<1>(b)) {
            return get<2>(a) > get<2>(b);
        }
        return get<1>(a) < get<1>(b);
    });
    for(int i=0;i<testcases;i++){
        if(get<2>(ranges[i]) <=abhi_ka_max) {
            is_nested[get<0>(ranges[i])] = true;
        }
        abhi_ka_max = max(abhi_ka_max, get<2>(ranges[i]));
    }
    int abhi_ka_min = INT32_MAX;
    for(int i=testcases-1;i>=0;i--){
        if(get<2>(ranges[i]) >= abhi_ka_min) {
            has_range[get<0>(ranges[i])] = true;
        }
        abhi_ka_min = min(abhi_ka_min, get<2>(ranges[i]));
    }
    rep(i, 0, testcases) {
        if(has_range[i]) {
            cout << "1 ";
        } else {
            cout << "0 ";
        }
    }
    cout << endl;
    rep(i, 0, testcases) {
        if(is_nested[i]) {
            cout << "1 ";
        } else {
            cout << "0 ";
        }
    }
    return 0;
}
// Above is my solution to the nested ranges check problem.
// It checks for nested ranges and ranges that have other ranges within them.
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n;

void solve(vector<vector<int>> ranges) {
    vector<int> check(n + 1);

    int pos = 0;
    for (auto r : ranges) {
        if (pos >= -r[1]) {
            check[r[2]] = 1;
        }
        pos = max(pos, -r[1]);
    }

    for (int i = 1; i <= n; i++) {
        cout << check[i] << " ";
    }
    cout << "\n";
}

int main() {
    cin >> n;

    vector<vector<int>> ranges1;
    vector<vector<int>> ranges2;

    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        ranges1.push_back({y, -x, i});
        ranges2.push_back({x, -y, i});
    }

    sort(ranges1.begin(), ranges1.end());
    sort(ranges2.begin(), ranges2.end());

    solve(ranges1);
    solve(ranges2);
}
// This is an alternative solution to the nested ranges check problem.
// understand this one also.
