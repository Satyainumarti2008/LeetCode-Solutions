class Solution {
    public boolean checkDivisibility(int n) {
        int sum = 0, mul = 1;
        int temp = n;
        while(temp > 0){
            int t = temp % 10;
            sum += t;
            mul *= t;
            temp /= 10;
        }
        sum += mul;
        if(n % sum == 0){
            return true;
        }
        return false
        ;
    }
}