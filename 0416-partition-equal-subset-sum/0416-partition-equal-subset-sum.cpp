class Solution {
public:
    bool subset(int index,vector<vector<int>>& dp,vector<int>& nums,int target){
        if(target==0){
            return 1;
        }
        if(index==nums.size()){
            return 0;
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        int skip=subset(index+1,dp,nums,target);
        int take=0;
        if(nums[index]<=target){
            take=subset(index+1,dp,nums,target-nums[index]);
        }
        dp[index][target]=take||skip;
        return dp[index][target];
    }
    bool canPartition(vector<int>& nums) {
        int totalSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }
        if(totalSum%2!=0){
            return 0;
        }
        int target=totalSum/2;
        vector<vector<int>>dp(nums.size(),vector<int>((target+1),-1));
        if(subset(0,dp,nums,target)){
            return 1;
        }
        return 0;
    }
};