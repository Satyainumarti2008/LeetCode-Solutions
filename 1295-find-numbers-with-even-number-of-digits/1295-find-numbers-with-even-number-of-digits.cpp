class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
            int e = 0;
            while(nums[i] > 0)
            {
                e++;
                nums[i] /= 10;
            }
            if(e % 2 == 0)
            c++;
        }
        return c;
    }
};