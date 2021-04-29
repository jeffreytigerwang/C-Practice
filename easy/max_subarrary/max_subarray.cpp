#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0], curSum = 0;
        
        for (int n : nums) {
            if (curSum < 0)
                curSum = 0;
            curSum += n;
            maxSub = max(maxSub, curSum);
        }
        return maxSub;
    }
};

int main(){
    // Solution s1;
    
    // vector<int> vect{ 10, 20, 30 };

    // std::cout << s1.maxSubArray(vect) << endl;

    vector<char> vect1{ 'a', 'b', 'c' };
    for (char i : vect1){
        std::cout << i << endl;
    }

    return 0;
}