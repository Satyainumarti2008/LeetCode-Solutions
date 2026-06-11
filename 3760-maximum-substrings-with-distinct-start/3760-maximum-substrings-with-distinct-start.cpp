class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>a;
        int c=0;
        for(int i=0;i<s.length();i++){
            a[s[i]]++;
        }
        // for(auto it:a){
        //     if(it.second>0)
        //         c++;
        // }
        return a.size();
    }
};