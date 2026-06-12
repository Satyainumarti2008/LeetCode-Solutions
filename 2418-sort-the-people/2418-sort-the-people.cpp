class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>s;
        unordered_map<int,string>map;
        for(int i=0;i<names.size();i++)
            map[heights[i]]=names[i];
        sort(heights.begin(),heights.end());
        for(int i=heights.size()-1;i>=0;i--){
            if(map.find(heights[i])!=map.end())
                s.push_back(map[heights[i]]);
        }
        return s;
    }
};