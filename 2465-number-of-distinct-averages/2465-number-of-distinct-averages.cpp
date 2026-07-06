class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_map<double,double>mp;
        int l=0,r=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(l<r){
            double d=(nums[l]+nums[r])/2.0;
            mp[d]=d;
            l++;
            r--;
        }
        return mp.size();
    }
};