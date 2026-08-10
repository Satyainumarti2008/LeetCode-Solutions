class Solution {
public:
    int coincount(int index, vector<int>& coins, vector<vector<int>>& dp,int amount){
        if(index==coins.size()){
            return 1e9;
        }
        if(amount==0){
            return 0;
        }
        if(dp[index][amount]!=-1){
            return dp[index][amount];
        }
        int skip=coincount(index+1,coins,dp,amount);
        int take=1e9;
        if(coins[index]<=amount){
            take=1+coincount(index,coins,dp,amount-coins[index]);
        }
        dp[index][amount]=min(take,skip);
        return dp[index][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp (coins.size(),vector<int>(amount+1,-1));
        int ans=coincount(0,coins,dp,amount);
        if(ans==1e9){
            return -1;
        }
        return ans;
    }
};