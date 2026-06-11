class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,maxs=0;
        for(int i=0;i<=nums.size()-1;i++){
        if(nums[i]==1)
        {
            c++;
            maxs=max(c,maxs);
        }
        else
        c=0;
        }
        return maxs;
    }
};