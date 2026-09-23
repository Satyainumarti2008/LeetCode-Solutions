class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int n = digits.size();
        carry = ( digits[n - 1] + 1 ) / 10;
        digits[n - 1] = ( digits[n - 1] + 1 ) % 10;
        for(int i = n -2; i >= 0; i--){
            int t = digits[i] + carry;
            digits[i] = t % 10;
            carry = t / 10;
        }
        if(carry == 1){
            digits.insert(digits.begin() , carry);
        }
        return digits;
    }
};