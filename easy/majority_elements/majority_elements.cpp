#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr = 1;
        int curr_m = 0;
        int res = nums[0];

        sort(nums.begin(), nums.end());

        for (int i = 0; i < (nums.size()-1); i++){
            if (nums.at(i) == nums.at(i+1)){
                curr += 1;
                curr_m = max(curr, curr_m);
            }
            else{
                if (curr >= curr_m){
                    curr_m = curr;
                    res = nums.at(i);
                    curr = 1;
                }
            }
        }

        if (curr >= curr_m){
            res = nums.at(nums.size()-1);
        }
        return res;
    }
};

int main(){
    Solution s1;
    
    vector<int> vect{ 3,3,4 };

    std::cout << s1.majorityElement(vect) << endl;

    return 0;
}