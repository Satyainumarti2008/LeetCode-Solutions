class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int mins=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mins=min(mins,sum);
        }
        return 1-mins;
    }
};