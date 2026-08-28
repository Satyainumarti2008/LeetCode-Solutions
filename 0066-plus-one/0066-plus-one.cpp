class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = (digits[digits.size() - 1] + 1) / 10;
        digits[digits.size() - 1] = (digits[digits.size() - 1] + 1) % 10;
        for(int i = digits.size() - 2; i >= 0; i--){
            if(c != 0){
                int t = (digits[i] + c);
                digits[i] = t % 10;
                c = t / 10;
            }
            else{
                break;
            }
        }
        if(c != 0){
            digits.insert(digits.begin(),c);
        }
        return digits;
    }
};