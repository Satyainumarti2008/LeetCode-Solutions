class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2){
            return 0;
        }
        vector<char> arr(n, 1);
        arr[0] = arr[1] = 0;
        for(int i = 2; i * i < n; i++){
            if(arr[i]){
                for(int j = i * i; j < n; j += i){
                    arr[j] = 0;
                }
            }
        }
        int c = 0;
        for(int i = 2; i < n; i++){
            c += arr[i];
        }
        return c;
    }
};