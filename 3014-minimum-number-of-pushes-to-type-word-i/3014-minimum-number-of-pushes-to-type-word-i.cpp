class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<int,int>mp;
        int p=1,ans=0;
        for(int i=0;i<26;i++){
            mp[i]=p;
            if((i+1)%8==0)
                p++;
        }
        for(int i=0;i<word.length();i++){
            ans+=mp[i];
        }
        return ans;
    }
};