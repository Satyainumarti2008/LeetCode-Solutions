class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>a;
        int l=0;
        int r=n;
        while(r<=nums.size()-1){
            a.push_back(nums[l++]);
            a.push_back(nums[r++]);
        }
        return a;
    }
};