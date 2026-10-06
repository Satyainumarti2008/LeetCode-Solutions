class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto i: arr){
            mp[i]++;
        }
        vector<int> v;
        for(auto i: mp){
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size() - 1; i++){
            if(v[i] == v[i + 1]){
                return false;
            }
        }
        return true;
    }
};