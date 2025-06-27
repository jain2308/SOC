#include "bits/stdc++.h"
using namespace std;
//first solution tried to remove all max one by one but failed;
// Next, we used priority queue to get the kth largest element
class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
            priority_queue<int> a;
            for(auto x:nums){
                a.push(x);
                if(a.size()>nums.size()+1-k){
                    a.pop();
                }
            }
            return a.top();
        }
    };
// Now we try to get most efficient solution using quickselect
// to be done and understood.