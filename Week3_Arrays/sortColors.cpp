#include <iostream>
#include <vector>
using namespace std;
// Problem: Sort Colors (LeetCode 75)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==0) zeros++;
            if(nums[i]==1) ones++;
            if(nums[i]==2) twos++;
        }

        //cout << zeros << ones << twos;

        for(int i=0; i<zeros; i++)
            nums[i] = 0;
        for(int i=zeros; i<(zeros+ones); i++)
            nums[i] = 1;
        for(int i=(ones+zeros); i<nums.size(); i++)
            nums[i] = 2;

    }
};