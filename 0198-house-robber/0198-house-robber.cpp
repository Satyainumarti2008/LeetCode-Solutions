class Solution {
public:
    int robber(int index,vector<int>& dp,vector<int>& nums){
        if(index>=nums.size()){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        dp[index]=max(nums[index]+robber(index+2,dp,nums),robber(index+1,dp,nums));
        return dp[index];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return robber(0,dp,nums);
    }
};