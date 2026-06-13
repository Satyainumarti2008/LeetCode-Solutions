class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>map;
        int c=0;
        for(auto i:nums)
            map[i]++;
        for(auto i:map){
            if(i.second==1){
                c=i.first;
                break;
            }
        }
        return c;
    }
};