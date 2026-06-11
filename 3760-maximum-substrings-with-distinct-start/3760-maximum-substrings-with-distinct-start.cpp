class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>a;
        for(auto it:s){
            a[it]++;
        }
        return a.size();
    }
};