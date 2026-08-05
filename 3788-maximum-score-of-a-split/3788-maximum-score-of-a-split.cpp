class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long maxs=LLONG_MIN;
        int n=nums.size();
        vector<long long>pre(nums.size());
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        int sufmin=nums[n-1];
        for(int i=n-1;i>=1;i--){
            sufmin=min(sufmin,nums[i]);
            maxs=max(maxs,(long long)pre[i-1]-(long long)sufmin);
        }
        return maxs;
    }
};