#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        set<int> temp;
            for (auto& i : nums){
                temp.insert(i);
            }
        return (temp.size()==nums.size()) ? false:true;

    }
};


int main(){
    Solution answer;
    vector<int> test1 = {1,2,3};
    cout << answer.containsDuplicate(test1) << endl;

    return 0;
}