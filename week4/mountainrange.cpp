#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];
    
    vector<int> dp(n, 1);
    stack<int> st;
    
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && h[st.top()] < h[i]) {
            dp[i] = max(dp[i], dp[st.top()] + 1);
            st.pop();
        }
        if (!st.empty()) {
            dp[i] = max(dp[i], dp[st.top()] + 1);
        }
        st.push(i);
    }
    
    cout << *max_element(dp.begin(), dp.end()) << '\n';
    return 0;
}