#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        int numsSize = nums.size();

        for (int i = 0; i < numsSize - 2; i++){
            int left = i + 1;
            int right = numsSize - 1;

            if (i > 0 && nums[i-1] == nums[i]){
                continue;
            }

            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0){
                    left++;
                }
                else if (sum > 0){
                    right--;
                }
                else{
                    res.push_back(vector<int>{nums[i], nums[left], nums[right]});

                    while ((left + 1) < right && nums[left] == nums[left + 1]){
                        left++;
                    }

                    while ((right - 1) > left && nums[right] == nums[right - 1]){
                        right--;
                    }

                    left++;
                    right--;
                }
            }
        }
        return res;
    }
};


int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    Solution answer = Solution();
    vector<vector<int>> res = answer.threeSum(nums);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}