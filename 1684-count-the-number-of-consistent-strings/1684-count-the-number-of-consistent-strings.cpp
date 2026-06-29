class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,char>map;
        int c=0;
        for(char ch:allowed)
            map[ch]=ch;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(map.find(map[words[i][j]])==map.end()){
                    c++;
                    break;
                }
            }
        }
        return words.size()-c;
    }
};