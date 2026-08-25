class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(int i=k;;i+=k){
            if(s.find(i)==s.end()){
                ans=i;
                break;
            }
        }
        return ans;
    }
};