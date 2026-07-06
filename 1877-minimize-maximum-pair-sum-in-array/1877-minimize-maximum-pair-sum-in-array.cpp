class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int l=0,r=nums.size()-1,res=0;
        sort(nums.begin(),nums.end());
        while(l<r){
            int s=nums[l]+nums[r];
            res=max(res,s);
            l++;
            r--;
        }
        return res;
    }
};