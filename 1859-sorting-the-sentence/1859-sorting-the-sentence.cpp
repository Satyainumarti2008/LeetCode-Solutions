class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);
        string temp="";
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
                temp+=s[i];
            else if(s[i]>='1'&&s[i]<='9'){
                ans[s[i]-'0']=temp;
                temp="";
            }
            else
                continue;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=""){
                if(!res.empty())
                    res+=" ";
                res+=ans[i];
            }
        }
        return res;
    }
};