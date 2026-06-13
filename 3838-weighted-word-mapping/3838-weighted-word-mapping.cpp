class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s="";
        for(auto r:words){
            int sum=0;
            for(auto ch:r){
                sum+=weights[ch-'a'];
            }
            s+='z'-sum%26;
        }
        return s;
    }
};