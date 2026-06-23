class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>s;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            c+=nums[i];
            s.push_back(c);
        }
        return s;
    }
};