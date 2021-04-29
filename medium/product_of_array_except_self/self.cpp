#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> L(n);
        vector<int> R(n);

        L[0] = 1;
        R[n-1] = 1;
        
        for (int i = 1; i < n; i++){
            L[i] = L[i-1]*nums[i-1];
        }

        for (int i = n-2; i >= 0; i--){
            R[i] = R[i+1]*nums[i+1];
        }

        vector<int> res(n);

        for (int i = 0; i < n; i++){
            res[i] = L[i]*R[i];
        }
        return res;
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5};
    Solution answer;

    
    for (const auto& i : answer.productExceptSelf(nums)){
        cout << i << endl;
    }
    return 0;
}