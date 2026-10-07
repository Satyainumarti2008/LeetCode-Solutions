class Solution {
public:
    string reverseVowels(string s) {
        bool a = false, b = false;
        int l = 0, r = s.length() - 1;
        while(l < r){
            if(s[l] =='a' || s[l] == 'e' || s[l] =='i' || s[l] =='o' || s[l] =='u' || s[l] =='A' || s[l] =='E' || s[l] =='I' || s[l] =='O' || s[l] =='U'){
                a = true;
            }
            if(s[r] =='a' || s[r] =='e' || s[r] =='i' || s[r] =='o' || s[r] =='u' || s[r] =='A' || s[r] =='E' || s[r] =='I' || s[r] =='O' || s[r] == 'U'){
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