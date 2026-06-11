class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i])
            return 1;
        }
        return 0;
        // unordered_map<int ,int>a;
        // for(int i=0;i<nums.size();i++){
        //     a[nums[i]]++;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(a[nums[i]]>1)
        //         return true;
        // }
        // return false;

    }
};