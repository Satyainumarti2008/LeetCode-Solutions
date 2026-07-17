class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char ,int>mp1,mp2;
        for(auto i:ransomNote)
            mp1[i]++;
        for(auto i:magazine)
            mp2[i]++;
        for(int i=0;i<ransomNote.size();i++){
            if(mp1.find(ransomNote[i])!=mp1.end()&&mp2.find(ransomNote[i])==mp2.end()){
                return false;
            }
            else if(mp1.find(ransomNote[i])!=mp1.end()&&mp2.find(ransomNote[i])!=mp2.end()){
                if(mp1[ransomNote[i]]>mp2[ransomNote[i]])
                    return false;
            }
        }
        return true;
    }
};