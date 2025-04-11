#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> indices;
    for(int i=0; i<nums.size()-1; i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if ((nums[i]+nums[j])==target) {
                indices.push_back(i);
                indices.push_back(j);
                break;
            }
        }
    }
    return indices;
}

int main() {
    cout << "Leetcode Submission : https://leetcode.com/problems/two-sum/submissions/1603622760/";
    return 0;
}
