class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>a;
        unordered_map<int,int>map;
        int freq=0;
        int mins=10000000;
        int maxs=-1;
        int f=0;
        for(auto row:grid){
            for(auto i:row){
                map[i]++;
                mins=min(mins,i);
                maxs=max(maxs,i);
                if(freq<map[i]){
                    freq=max(freq,map[i]);
                    f=i;
                }
            }
        }
        a.push_back(f);
        for(int i=mins-2;i<=maxs;i++){
            if(i<0)
            continue;
            if(map.find(i+1)==map.end()){
                a.push_back(i+1);
                break;
            }
        }
        return a;
    }
};