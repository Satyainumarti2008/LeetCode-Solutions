class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int>mp;
        for(auto i:brokenLetters)
            mp[i]++;
        bool flag=false;
        int c=0;
        for(int i=0;i<text.size();i++){
            if(mp[text[i]]>0)
                flag=true;
            if(text[i]==' '&&!flag){
                c++;
                flag=false;
            }
            if(text[i]==' '&&flag)
                flag=false;
        }
        if(!flag)
            c++;
        return c;
    }
};