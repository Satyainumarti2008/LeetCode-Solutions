class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0]+1;
        }
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]=i;
        }
        int maxSum=nums[0],k=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                maxSum+=nums[i];
            }
            else{
                break;
            }
        }
        int n=nums.size(),ans=0;
        while(n+1>0){
            if(mp.find(maxSum)==mp.end()){
                ans=maxSum;
                break;
            }
            maxSum++;
            n--;
        }
        return ans;
    }
};