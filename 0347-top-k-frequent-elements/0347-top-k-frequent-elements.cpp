class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int>map;
        priority_queue<pair<int,int>>q;
        vector<int>v;
        for(auto i:nums)
            map[i]++;
        int t=k;
        for(auto i:map){
            q.push({i.second,i.first});
        }
        int s=q.size();
        while(k--){
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};