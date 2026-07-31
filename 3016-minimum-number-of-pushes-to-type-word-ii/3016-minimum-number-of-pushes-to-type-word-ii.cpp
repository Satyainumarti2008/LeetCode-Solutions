class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        vector<int>v;
        int ans=0;
        for(auto ch:word){
            mp[ch]++;
        }
        for(auto i:mp)
            v.push_back(i.second);
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            ans+=v[i]*((i/8)+1);
        }
        return ans;
    }
};