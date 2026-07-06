class Solution {
public:
    string clearDigits(string s) {
        string str="";
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z')
                st.push(s[i]);
            else
                st.pop();
        }
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;   
    }
};