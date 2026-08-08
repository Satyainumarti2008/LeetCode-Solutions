class Solution {
public:
    int weight(int index,vector<int>& stones,vector<vector<int>>& dp,int& target,int sum){
        if(index==stones.size()){
            return sum;
        }
        if(dp[index][sum]!=-1){
            return dp[index][sum];
        }
        int skip=weight(index+1,stones,dp,target,sum);
        int take=0;
        if(sum+stones[index]<=target){
            take=weight(index+1,stones,dp,target,sum+stones[index]);
        }
        dp[index][sum]=max(take,skip);
        return dp[index][sum];
    }
    int lastStoneWeightII(vector<int>& stones) {
        int totalSum=0;
        for(int i:stones){
            totalSum+=i;
        }
        int target=totalSum/2;
        vector<vector<int>>dp (stones.size(),vector<int>(target+1,-1));
        int pos=weight(0,stones,dp,target,0);
        return totalSum-pos*2;
    }
};