class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double x=0;
        double maxs=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(i<k)
                x+=nums[i];
            else{
                maxs=max(maxs,x/k);
                x-=nums[abs(i-k)];
                x+=nums[i];
                maxs=max(maxs,x/k);
            }
        }
        if(nums.size()==1)
            return (double)x;
        else if(nums.size()==k)
            return x/k;
        return maxs;
    }
};