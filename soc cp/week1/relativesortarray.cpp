#include "bits/stdc++.h"
using namespace std;
class Solution {
    public:
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
            int n = arr2.size();
            unordered_map<int,int> ordering;
            for(int i =0; i<n;i++){
                ordering[arr2[i]] = n-i;
            }
                sort(arr1.begin(), arr1.end(), [&](int a, int b) {
                if(ordering[a] !=0 || ordering[b] !=0){
                    return ordering[a] > ordering[b];
                }
                else{
                    return a<b;
                }
        });
                return arr1;
        }
    };