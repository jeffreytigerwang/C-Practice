#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = *max_element(nums.begin(),nums.end());
        int max1 = 1;
        int min1 = 1;
        int temp = 0;
        for (auto i:nums){
            if (i==0){
                max1 = 1;
                min1 = 1;
                continue;
            }            
            temp = max1;
            max1 = max(max(max1*i, min1*i),i);
            min1 = min(min(temp*i, min1*i),i);

            res = max(max1, res);
        }
        return res;
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5};
    Solution answer = Solution();
    cout << answer.maxProduct(nums) << endl;
    return 0;
}