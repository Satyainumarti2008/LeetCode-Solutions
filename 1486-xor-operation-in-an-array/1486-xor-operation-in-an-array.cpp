class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start;
        int i = 1;
        while(i < n){
            int t = start + 2 * i;
            ans ^= t;
            i++;
        }
        return ans;
    }
};