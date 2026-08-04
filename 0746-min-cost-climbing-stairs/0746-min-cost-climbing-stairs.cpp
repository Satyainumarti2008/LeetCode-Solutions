class Solution {
public:
    int mincost(int index,vector<int>& cost,vector<int>& dp){
        if(index>=cost.size()){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        dp[index]=cost[index]+min(mincost(index+1,cost,dp),mincost(index+2,cost,dp));
        return dp[index];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        return min(mincost(0,cost,dp),mincost(1,cost,dp));
    }
};