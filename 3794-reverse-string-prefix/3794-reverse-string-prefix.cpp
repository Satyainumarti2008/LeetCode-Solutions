class Solution {
public:
    void reverse(string &s,int l,int r){
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
    string reversePrefix(string s, int k) {
        reverse(s,0,k-1);
        return s;
    }
};