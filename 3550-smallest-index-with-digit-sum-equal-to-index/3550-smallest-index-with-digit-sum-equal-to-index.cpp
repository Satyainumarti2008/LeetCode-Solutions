class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int s = 0;
            int t = nums[i];
            while(t > 0){
                s += t % 10;
                t /= 10;
            }
            if(s == i){
                return i;
            }
        }
        return -1;
    }
};