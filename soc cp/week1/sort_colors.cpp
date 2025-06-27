#include "bits/stdc++.h"
using namespace std;
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int a = count(nums.begin(),nums.end(),0);
            int b = count(nums.begin(),nums.end(),1);
            int c = count(nums.begin(),nums.end(),2);
            for(int i=0;i < a+b+c;i++){
                if(i<a)nums[i] = 0;
                else if(i<a+b) nums[i] = 1;
                else nums[i] = 2;
            }
        }
    };
// one pass algorithm
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int low = 0, mid = 0, high = nums.size() - 1;
            while (mid <= high) {
                if (nums[mid] == 0) {
                    swap(nums[low++], nums[mid++]);
                } else if (nums[mid] == 1) {
                    mid++;
                } else {
                    swap(nums[mid], nums[high--]);
                }
            }
        }
    };