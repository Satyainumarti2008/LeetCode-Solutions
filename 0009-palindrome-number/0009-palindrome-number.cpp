class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return 0;
        }
        int t = x;
        long rev = 0;
        while(t > 0){
            int a = t % 10;
            rev = rev * 10 + a;
            t /= 10;
        } 
        if(x == rev){
            return 1;
        }
        return 0;
    }
};