#include"bits/stdc++.h"
using namespace std;
int main(){
    int x =45;
    cout << __builtin_clz(x) << "\n";
    cout << __builtin_ctz(x) << "\n";
    cout << __builtin_popcount(x) << "\n";
    cout << __builtin_parity(x) << "\n";
}