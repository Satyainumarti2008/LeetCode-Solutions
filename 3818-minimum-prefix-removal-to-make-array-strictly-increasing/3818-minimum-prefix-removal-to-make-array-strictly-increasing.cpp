class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int c = 1;
        for(int i = nums.size()-1; i > 0; i--){
            if(nums[i] == nums[i - 1] + 1){
                c++;
            }
            else{
                break;
            }
        }
        return nums.size() - c;
    }
};