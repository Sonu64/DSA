#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int SIZE = nums.size()/2;
        vector<int> positives;
        vector<int> negatives;

        for(int i=0; i<nums.size(); i++) {
            if (nums[i] >= 0)
                positives.push_back(nums[i]);
            else 
                negatives.push_back(nums[i]);
        }     

        int i = 0, currentIndex = 0;

        while(i < SIZE) {
            
            nums[currentIndex] = positives[i];
            currentIndex++;
            nums[currentIndex] = negatives[i];
            currentIndex++;

            i++;
        }

        return nums;
    }
};