class Solution {
public:
    string reverseWords(string s) {
        vector<string> st;
        string a="";
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                a += s[i];
            }
            else{
                if(!a.empty()){
                    st.push_back(a);
                }
                a = "";
            }
        }
        if(!a.empty()){
            st.push_back(a);
        }
        a = "";
        for(int i = st.size() - 1; i >= 0; i--){
            a += st[i];
            if(i != 0){
                a += " ";
            }
        }
        return a;
    }
};