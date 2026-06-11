class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        int maxVow=0;
        int maxCon=0;
        for(auto it:mp){
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u'){
                maxVow=max(maxVow,it.second);
            }
            else{
                maxCon=max(maxCon,it.second);
            }
        }
        return maxVow+maxCon;
    }
};