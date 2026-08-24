class Solution {
public:
    void strings(int index, vector<string> &s, int &n, string st){
        if(index==n){
            s.push_back(st);
            return;
        }
        strings(index+1, s, n, st+'1');
        if(st.empty() || st.back()!='0'){
            strings(index+1, s, n, st+'0');
        }
    }
    vector<string> validStrings(int n) {
        vector<string> s;
        strings(0,s,n,"");
        return s;
    }
};