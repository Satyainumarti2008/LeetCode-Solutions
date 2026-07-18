class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mins=INT_MAX,maxs=INT_MIN,ans=0;
        for(int i=0;i<nums.size();i++){
            mins=min(mins,nums[i]);
            maxs=max(maxs,nums[i]);
        }
        for(int i=1;i<=mins;i++){
            if(mins%i==0&&maxs%i==0)
                ans=i;
        }
        return ans;
    }
};