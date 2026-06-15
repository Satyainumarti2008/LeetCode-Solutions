class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int maxs=-1;
        for(auto i:arr){
            mp[i]=i;
            maxs=max(maxs,i);
        }
        int c=0;
        for(int i=1;i<=maxs;i++){
            if(c==k)
                return i-1;
            if(mp.find(i)==mp.end())
                c++;
        }
        return arr.size()+k;
    }
};