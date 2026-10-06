class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, r = s.length() - 1;
        bool a = false, b = false;
        while(l < r){
            if(s[l] >= 'a' && s[l] <= 'z' || s[l] >= 'A' && s[l] <= 'Z'){
                a = true;
            }
            if(s[r] >= 'a' && s[r] <= 'z' || s[r] >= 'A' && s[r] <= 'Z'){
                b = true;
            }
            if(a && b){
                swap(s[l], s[r]);
                a = false;
                b = false;
            }
            if(!a){
                l++;
            }
            if(!b){
                r--;
            }
        }
        return s;
    }
};