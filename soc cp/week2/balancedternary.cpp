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
    string s;
    cin >> s;
    int x = n/3;
    int types[3];
    types[0] = count(all(s), '0')-x;
    types[1] = count(all(s), '1')-x;
    types[2] = count(all(s), '2')-x;
    //1 done
    if(types[0]<0){
        if(types[1] < 0){
            for(int j=0;(types[0] + types[1])<0;j++){
                if(s[j]=='2'){
                    if(types[0] < 0){
                    s[j]='0';
                    types[0]++;
                    }
                    else{
                        s[j]='1';
                        types[1]++;
                    }
                }
            }
        }
        else{
            // 2 done
            if(types[2] < 0){
                for(int j=0;types[0] <0;j++){
                if(s[j]=='1'){
                    s[j]='0';
                    types[0]++;
                }
                }
            for(int j=s.length()-1; j>=0 && types[2] <0; j--){
            if(s[j]=='1'){
                s[j]='2';
                types[2]++;
            }
            }
            }
            // 3 done
            else{
                for(int j=0; (types[1] + types[2]) > 0; j++){
                    if(types[2]>0 && s[j]=='2'){
                        s[j] = '0';
                        types[2]--;
                    }
                    else if(types[1] >0 && s[j] == '1'){
                            s[j] = '0';
                            types[1]--;
                    }
                }
            }
        }
    }
    else{// 4 done
        if(types[1] >=0){
            for(int j=s.length()-1; j>=0 && (types[0]+types[1]) > 0; j--){
                if(types[0]>0 && s[j]=='0'){
                        s[j] = '2';
                        types[0]--;
                    }
                    else if(types[1] > 0){
                        if(s[j] == '1'){
                            s[j] = '2';
                            types[1]--;
                        }
                    }
            }
        }
        else{
            // 5 done
           if(types[2] >= 0){
            for(int j=0;(types[2]) > 0; j++){
                if(s[j]=='2'){
                        s[j] = '1';
                        types[2]--;
                    }
            }
            for(int j=s.length()-1; j>=0 && (types[0]) > 0; j--){
                if(s[j]=='0'){
                        s[j] = '1';
                        types[0]--;
                    }
            }
           }
           // 6 done
           else{
            for(int j=s.length()-1; j>=0 && (types[2] + types[1])<0; j--){
                if(s[j]=='0'){
                    if(types[2] < 0){
                    s[j]='2';
                    types[2]++;
                    }
                    else{
                        s[j]='1';
                        types[1]++;
                    }
                }
            }
           }
        }
    }
    cout << s << endl;
    return 0;
}
// more mazdoori type stuff.
