class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        int mins=10000000;
        int maxs=-1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=nums[i];
            if(mins>nums[i])
                mins=min(mins,nums[i]);
            if(maxs<nums[i])
                maxs=max(maxs,nums[i]);
        }
        for(int i=mins+1;i<maxs;i++){
            if(mp.find(i)==mp.end())
                v.push_back(i);
        }
        return v;
    }
};