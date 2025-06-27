/*#include "bits/stdc++.h"
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
    int min_end =0;
    int min_end_index = 0;
    int max_filled = 1;
    int max_start =0;
    int max_start_index=0;
    vector<int> roomno(n);
    vector<int> endings(1);
    vector<int> startings;
    for (int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        if(i==0) startings.push_back(x);
        if(x > min_end){
            roomno[i] = min_end_index+1;
            endings[min_end_index] = y;
        }
        else if(y < max_start){
            roomno[i] = max_start_index+1;
            startings[max_start_index]=x;
        }
        else{
            roomno[i] = ++max_filled;
            endings.push_back(y);
            startings.push_back(x);
        }
        auto it = min_element(endings.begin(), endings.end());
        min_end = *it;
        min_end_index = distance(endings.begin(), it);
        auto it1 = max_element(startings.begin(), startings.end());
        max_start = *it1;
        max_start_index = distance(startings.begin(), it1);
    }
    cout << max_filled << endl;
    for(auto no : roomno){
        cout << no <<" ";
    }
    return 0;
}
*/
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
    vector<vector<int>>timings;
    vector<int> room_pairings(testcases);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<vector<int>> timings1;
    int max_filled = 1;
    rep(i, 0, testcases) {
        int x,y;
        cin >> x >> y;
        timings.pb({x, y, i});
    }
    sort(all(timings));
    pq.push({0, 1});
    for(auto timing:timings){
        pii p = pq.top();
        if(timing[0] > p.first){
            room_pairings[timing[2]] = p.second;
            pq.pop();
            pq.push({timing[1], p.second});
        }
        else{
            room_pairings[timing[2]] = ++max_filled;
            pq.push({timing[1], max_filled});
    }
}
    cout << max_filled << endl;
    for(auto x : room_pairings){
        cout << x <<" ";
    }
    return 0;
}