class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>a;
        for(int i=0;i<s.length();i++){
            a[s[i]]++;
        }
        return a.size();
    }
};