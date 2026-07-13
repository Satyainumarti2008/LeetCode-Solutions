class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        string s="";
        char ch='a';
        for(int i=0;i<key.length();i++){
            if(mp.find(key[i])==mp.end()&&key[i]!=' '){
                mp[key[i]]=ch;
                ch++;
            }
        }
        for(int i=0;i<message.length();i++){
            if(message[i]==' ')
                s+=" ";
            else
                s+=mp[message[i]];
        }
        return s;
    }
};