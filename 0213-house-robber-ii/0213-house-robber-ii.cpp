class Solution {
public:
    int robber(int index,vector<int>& dp,vector<int>& nums,int n){
        if(index>n){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        dp[index]=max(nums[index]+robber(index+2,dp,nums,n),robber(index+1,dp,nums,n));
        return dp[index];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        vector<int>dp(nums.size(),-1);
        int m1=robber(0,dp,nums,nums.size()-2);
        fill(dp.begin(),dp.end(),-1);
        int m2=robber(1,dp,nums,nums.size()-1);
        return max(m1,m2);
    }
};