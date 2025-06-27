#include "bits/stdc++.h"
using namespace std;
class Solution {
    public:
        bool is_vowel(char x){
            if(x == 'a' || x=='e' || x== 'i' || x=='o' || x=='u'){
                return true;
            }
            return false;
        }
        int maxVowels(string s, int k) {
            int ans=0;
            int ansmax=0;
            for(int i=0;i<k;i++){
                if(is_vowel(s[i]))ans++;
            }
            for(int i=k;i<s.size();i++){
                if(ans>ansmax) ansmax=ans;
                if(is_vowel(s[i]) && !is_vowel(s[i-k])) ans++;
                else if (!is_vowel(s[i]) && is_vowel(s[i-k])) ans--;
            }
            if(ans > ansmax) ansmax=ans;
            return ansmax;
        }
    };