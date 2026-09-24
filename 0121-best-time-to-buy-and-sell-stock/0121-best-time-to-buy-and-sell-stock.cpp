class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mins = INT_MAX, res = 0;
        for(int i = 0; i < prices.size(); i++){
            if(mins > prices[i]){
                mins = prices[i];
            }
            res = max(res , prices[i] - mins);
        }
        return res;
    }
};