//Q. 1 - Two Sum on LeetCode
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;

        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int num = nums[i];
            int nn = target - num;

            if(mpp.find(nn) != mpp.end()) {
                return {mpp[nn], i};
            }

            mpp[num] = i;
        }

        return {-1, -1};
    }
};