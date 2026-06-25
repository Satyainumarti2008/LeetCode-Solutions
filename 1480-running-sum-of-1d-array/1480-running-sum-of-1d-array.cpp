class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            c+=nums[i];
            nums[i]=c;
        }
        return nums;
    }
};