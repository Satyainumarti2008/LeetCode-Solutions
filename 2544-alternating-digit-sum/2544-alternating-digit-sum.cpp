class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0, d = 0;
        int t = n;
        while(t > 0){
            d++;
            t /= 10;
        }
        int a = 1;
        if(d % 2 == 0){
            a = -1;
        }
        t = n;
        while(t > 0){
            ans += a * (t % 10);
            a *= -1;
            t /=10;
        }
        return ans;
    }
};