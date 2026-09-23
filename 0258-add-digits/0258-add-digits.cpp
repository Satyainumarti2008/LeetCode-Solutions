class Solution {
public:
    int addDigits(int num) {
        int temp = num, t=num;
        while(temp > 9){
            int sum = 0;
            while(t > 0){
                sum += t % 10;
                t /= 10;
            }
            t = sum;
            temp = sum;
        }
        return temp;
    }
};