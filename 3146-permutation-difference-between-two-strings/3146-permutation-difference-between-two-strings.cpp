class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>map;
        int ans=0;
        for(int i=0;i<t.size();i++)
            map[t[i]]=i;
        for(int i=0;i<s.size();i++){
            if(map.find(s[i])!=map.end())
                ans+=abs(i-map[s[i]]);
        }
        return ans;
    }
};