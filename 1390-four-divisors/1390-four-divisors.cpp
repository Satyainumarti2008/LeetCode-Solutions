class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            int t = nums[i];
            int c = 0, sum = 0;
            for(int j = 1; j <= sqrt(t); j++){
                if(t % j == 0){
                    sum += j; 
                    c++;
                    if(j != t / j){
                        sum += t / j;
                        c++;
                    }
                }
            }
            if(c==4){
                ans += sum;
            }
        }
        return ans;
    }
};