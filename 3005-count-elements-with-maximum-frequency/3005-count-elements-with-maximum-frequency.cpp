class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxs=0;
        for(auto i:nums){
            mp[i]++;
            maxs=max(maxs,mp[i]);
        }
        int c=0;
        for(auto i:mp){
            if(i.second==maxs)
                c+=i.second;
        }
        return c;
    }
};