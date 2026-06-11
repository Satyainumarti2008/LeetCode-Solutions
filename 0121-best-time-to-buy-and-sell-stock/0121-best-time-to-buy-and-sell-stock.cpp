class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mins=10000000;
        int res=0;
        for(int i=0;i<n;i++){
            if(mins>prices[i]){
                mins=prices[i];
            }
            res=max(res,(prices[i]-mins));
        }
        return res;
    }
};