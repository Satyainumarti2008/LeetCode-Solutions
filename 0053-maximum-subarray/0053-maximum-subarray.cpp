class Solution {
public:
    int maxs(int index, vector<int>& nums, vector<int>& dp){
        if(index==0){
            return nums[0];
        }
        if(index>nums.size()){
            return INT_MIN;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        dp[index]=max(nums[index],nums[index]+maxs(index-1,nums,dp));
        return dp[index];
    }
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        vector<int> dp(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            ans=max(ans,maxs(i,nums,dp));
        }
        return ans;
    }
};