class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int r=nums.size();
       for(int i=0;i<r;i++)
       {
        for(int j=1+i;j<r;j++){
            if(j-i>k)
            break;
            if(nums[i]==nums[j])
            return true;
        }
       }
       return false;
    }
};