class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int co = 0;
        vector<int> freq(10, 0);
        for (int i : digits) {
            freq[i]++;
        }
        for(int i = 100; i <= 998; i += 2){
            int x = i;
            int a = x / 100;
            int b = (x / 10) % 10;
            int c = x % 10;
            vector<int> v(10, 0);
            v[a]++;
            v[b]++;
            v[c]++;
            bool flag = true;
            for(int i = 0; i <= 9; i++){
                if(v[i] > freq[i]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                co++;
            }
        }
        return co;
    }
};