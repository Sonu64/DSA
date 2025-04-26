#include <bits/stdc++.h>
#include <iostream>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int curr = 0, prev = 0;
        for(int i=0; i<nums.size(); i++) {
            curr = nums[i];
            if (curr == prev) {
                return curr;
                break;
            }
            prev = curr; 
        }
        return prev;
    }
};