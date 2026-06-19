class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            vector<int>res;
            while(n>0){
                res.push_back(n%10);
                n/=10;
            }
            ans.insert(ans.end(),res.rbegin(),res.rend());
            res.clear();
        }
        return ans;
    }
};