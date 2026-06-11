class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int ,int>a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(a.find(i)==a.end())
                return i;
        }
        return nums.size();
    }
};