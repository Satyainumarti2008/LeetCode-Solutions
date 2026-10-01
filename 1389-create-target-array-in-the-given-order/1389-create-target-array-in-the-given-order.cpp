class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> s;
        for(int i = 0; i < nums.size(); i++){
                s.insert(s.begin()+index[i], nums[i]);
            }
        return s;
    }
};