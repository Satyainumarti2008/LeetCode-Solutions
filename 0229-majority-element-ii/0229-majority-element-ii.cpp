class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>mp;
        int n=nums.size()/3;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp){
            if(i.second>n)
                v.push_back(i.first);
        }
        return v;
    }
};