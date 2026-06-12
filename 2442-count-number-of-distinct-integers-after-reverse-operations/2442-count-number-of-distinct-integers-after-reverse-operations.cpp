class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            int x=nums[i];
            while(x>0){
                sum=sum*10+x%10;
                x/=10;
            }
            nums.push_back(sum);
        }
        for(auto i:nums)
            mp[i]++;
        return mp.size();
    }
};