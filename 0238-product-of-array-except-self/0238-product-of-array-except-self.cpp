class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        int ans1=1;
        int ans2=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=ans1;
            ans1*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=ans2;
            ans2*=nums[i];
        }
        return ans;
    }
};