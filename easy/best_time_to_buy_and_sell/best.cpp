#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty() || prices.size()==1){
            return 0;
        }

        int max_p = 0;
        int temp = prices[0];

        for (int i = 1; i < prices.size(); i++){
            if (temp < prices[i]){
                max_p = max(max_p, prices[i]-temp);
            }
            else{
                temp = prices[i];
            }
        }
        
        return max_p;
    }
};

int main(){
    vector<int> prices1 = {7,1,5,3,6,4};
    Solution answer;
    cout << answer.maxProfit(prices1) << endl;

    return 0;
}