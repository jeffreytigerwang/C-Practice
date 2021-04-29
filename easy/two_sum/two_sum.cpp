#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>


using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> prevMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            
            if(prevMap.count(diff)) 
                return { prevMap[diff], i };
            prevMap[nums[i]] = i;
        }
        return {};
    }
};

int main(){
    vector<int> vect = {3, 2, 4};
    int target = 6;
    Solution answer;
    vector<int> res = answer.twoSum(vect, target);
    for (vector<int>::iterator i = res.begin(); i != res.end(); i++){
        
        cout << *i << ' ';
    }

    return 0;


}