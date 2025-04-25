#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n = 5;
    vector<int> nums = {3, 0, 1, 4, 2};
    
    int actualSum = 0;
    int expectedSum = ((n) * (n + 1)) / 2; // Sum of first n natural numbers
    for(int i=0; i<nums.size(); i++) {
        actualSum += nums[i];
    }
    return expectedSum - actualSum; // Missing number
}