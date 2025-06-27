#include "bits/stdc++.h"
using namespace std;
// First try
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            vector<int> negatives;
            vector<int>positives;
           for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negatives.push_back(nums[i]);
            }
            if(nums[i]>=0){
                positives.push_back(nums[i]);
            }
           }
           reverse(negatives.begin(), negatives.end());
           for(int i=0;i<negatives.size();i++){
            negatives[i] = negatives[i] * negatives[i];
           }
           for(int i=0;i<positives.size();i++){
            positives[i] = positives[i] * positives[i];
           }
           for(int i=0,j=0; i <negatives.size() || j<positives.size();){
            if(i== negatives.size()){
                nums[i+j] = positives[j];
                j++;
                continue;
            }
            if(j== positives.size()){
                nums[i+j] = negatives[i];
                i++;
                continue;
            }
            if(negatives[i]<positives[j]){
                nums[i+j] = negatives[i];
                i++;
            }
            else{
                nums[i+j] = positives[j];
                j++;
            }
           }
           return nums;
        }
    };
    // second try
    class Solution {
        public:
            vector<int> sortedSquares(vector<int>& nums) {
                stack<int> negatives;
                queue<int>positives;
                vector<int>res;
                for(auto x:nums){
                    if(x>=0)positives.push(x*x);
                    else negatives.push(x*x);
                }
                while(!(positives.empty() && negatives.empty())){
                if(positives.empty()){
                    res.push_back(negatives.top());
                    negatives.pop();
                    continue;
                }
                if(negatives.empty()){
                    res.push_back(positives.front());
                    positives.pop();
                    continue;
                }
                if(positives.front() < negatives.top()){
                    res.push_back(positives.front());
                    positives.pop();
                }
                else{
                    res.push_back(negatives.top());
                    negatives.pop();
                }
                }
                return res;
            }
        };