class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        unordered_map<int,int>pre;
        unordered_map<int,int>suf;
        int totalSum=0;
        int sum1=0;
        int sum2=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
            totalSum+=nums[i];
        for(int i=0;i<n;i++){
            sum1+=nums[i];
            if(totalSum-sum1==sum1-nums[i])
                return i;
        }
        return -1;
    }
};