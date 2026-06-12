class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        int freq=0;
        for(auto i:s){
            mp[i]++;
            freq=max(freq,mp[i]);
        }
        for(auto i:mp){
            if(i.second!=freq)
                return 0;
        }
        return 1;
    }
};