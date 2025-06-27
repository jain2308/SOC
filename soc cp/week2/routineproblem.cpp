#include "bits/stdc++.h"
#include <numeric>
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
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// Driver code
int32_t main() {
    fast_io();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a*d > b*c){
        int num = a*d-b*c;
        int den = a*d;
        int g = gcd(num, den);
        num/=g;
        den/=g;
        cout << num << "/" << den << endl;
    }
    else{
        int num = b*c-a*d;
        int den = b*c;
        int g = gcd(num,den);
        num/=g;
        den/=g;
        cout << num << "/" << den << endl;
    }
    return 0;
}
