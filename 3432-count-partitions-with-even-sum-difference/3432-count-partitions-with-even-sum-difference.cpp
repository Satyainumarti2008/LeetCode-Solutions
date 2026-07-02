class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum=0;
        for(int i:nums)
            totalSum+=i;
        int sum=0; 
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            totalSum-=nums[i];
            sum+=nums[i];
            if((sum-totalSum)%2==0)
                c++;
        }
        return c;
    }
};