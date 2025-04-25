#include <iostream>
#include <vector>
using namespace std;
// Problem: Sort Colors (LeetCode 75)

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans = {0,0};
        int maxOnes = 0, onesInCurrentRow = 0, targetRow = 0;

        for(int i=0; i<mat.size(); i++) {
            onesInCurrentRow = 0;
            for(int j=0; j<mat[i].size(); j++) {
                if (mat[i][j] == 1)
                    onesInCurrentRow++;
            }
            if (onesInCurrentRow > maxOnes) {
                maxOnes = onesInCurrentRow;
                targetRow = i;
            }
        }

        ans[0] = targetRow;
        ans[1] = maxOnes;

        return ans;

    }
};