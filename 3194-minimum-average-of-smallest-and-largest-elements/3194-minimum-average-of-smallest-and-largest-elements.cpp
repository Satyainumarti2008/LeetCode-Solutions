class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        double mins=DBL_MAX;
        sort(nums.begin(),nums.end());
        while(l<r){
            double d=(nums[l]+nums[r])/2.0;
            mins=min(mins,d);
            l++;
            r--;
        }
        return mins;
    }
};