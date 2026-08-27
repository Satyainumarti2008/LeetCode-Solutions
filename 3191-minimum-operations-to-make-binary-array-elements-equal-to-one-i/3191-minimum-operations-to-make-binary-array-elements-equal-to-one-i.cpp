class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c = 0;
        for(int i = 0; i < nums.size()-2; i++){
            if(nums[i] == 0){
                nums[i] = 1;
                if(nums[i+1] == 1)
                    nums[i+1] = 0;
                else
                    nums[i+1] = 1;
                if(nums[i+2] == 1)
                    nums[i+2] = 0;
                else
                    nums[i+2] = 1;
                c++;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0)
                return -1;
        }
        return c;
    }
};