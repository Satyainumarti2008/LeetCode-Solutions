class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int>v;
        for(int i=0;i<=nums.size()-k;i++){
            v.clear();
            for(int j=i;j<i+k;j++){
                v.push_back(nums[j]);
            }
            unordered_set<int>s;
            for(int j=0;j<v.size();j++){
                s.insert(v[j]);
            }
            for(auto i:s){
                mp[i]++;
            }
        }
        int ans=-1;
        for(auto i:mp){
            if(i.second==1)
                ans=max(ans,i.first);
        }
        return ans;
    }
};