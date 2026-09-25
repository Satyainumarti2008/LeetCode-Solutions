class Solution {
public:
    bool isHappy(int n) {
        if(n == 1){
            return 1;
        }
        int sum = 0;
        while(n > 6){
            int t = n;
            sum = 0;
            while(t > 0){
                int r = t % 10;
                sum += r * r;
                t /= 10;
            }
            n = sum;
        }
        if(sum == 1){
            return 1;
        }
        return 0;
    }
};