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
void dfs(int node, vector<char>& inputs, vector<bool>& visited, int n, int m) {
    visited[node] = true;
    int x = (node - 1) / m;
    int y = (node - 1) % m;
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    for(auto dir : directions) {
        int newX = x + dir.first;
        int newY = y + dir.second;
        if(newX >= 0 && newX < n && newY >= 0 && newY < m) {
            int newNode = newX * m + newY + 1;
            if(!visited[newNode] && inputs[newNode] == '.') {
                dfs(newNode, inputs, visited, n, m);
            }
        }
    }
}
// Driver code
int32_t main() {
    fast_io();
    int n, m;
    cin >> n >> m;
    vector<char> inputs(n*m+1);
    for(int i = 1; i <= n*m; i++) {
        cin >> inputs[i];
    }
    vector<bool> visited(n*m+1, false);
    int count = 0;
    for(int i = 1; i <= n*m; i++) {
        if(!visited[i] && inputs[i] == '.') {
            count++;
            dfs(i, inputs, visited, n, m);
        }
        }
    cout << count << endl;
    return 0;
}
