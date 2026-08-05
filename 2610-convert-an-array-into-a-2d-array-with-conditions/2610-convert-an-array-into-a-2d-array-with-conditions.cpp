class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==ans.size()){
                ans.push_back({});
            }
            ans[mp[nums[i]]].push_back(nums[i]);
            mp[nums[i]]++;
        }
        return ans;
    }
};