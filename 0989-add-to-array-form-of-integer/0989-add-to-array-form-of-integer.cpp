class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int c = 0;
        for(int i = num.size() - 1; i >= 0; i--){
            if(k > 0){
                int t = num[i] + k % 10;
                num[i] = (t + c) % 10;
                c = (t+c) / 10;
                k /= 10;
            }
            else{
                int r = c + num[i];
                c = r / 10;
                num[i] = r%10;
            }
        }
        while(k > 0){
            int t = k % 10 + c;
            c = t / 10;
            num.insert(num.begin(),t%10);
            k /=10;
        }
        if(c != 0){
            num.insert(num.begin(),c);
        }
        return num;
    }
};