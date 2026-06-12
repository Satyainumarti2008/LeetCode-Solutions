class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        int maxs=-1;
        int c=0;
        for(auto i:mp){
            maxs=max(maxs,i.second);
        }
        for(auto i:mp){
            if(i.second==maxs)
                c+=i.second;
        }
        return c;
    }
};