class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int ans=0;
        for(auto i:nums){
            map[i]=i;
        }
        for(int i=k;;i+=k){
            if(map.find(i)==map.end()){
                ans=i;
                break;
            }
        }
        return ans;
    }
};