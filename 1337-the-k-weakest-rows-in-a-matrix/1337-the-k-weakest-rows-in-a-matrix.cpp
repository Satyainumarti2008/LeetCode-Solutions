class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        for(int i=0;i<mat.size();i++){
            int s=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0)
                    break;
                s+=mat[i][j];
            }
            ans.push_back(s);
        }
        unordered_map<int ,vector<int>>mp;
        for(int i=0;i<ans.size();i++)
            mp[ans[i]].push_back(i);
        sort(ans.begin(),ans.end());
        vector<int>res;
        for(int i=0;i<ans.size();i++){
            if(mp.find(ans[i])!=mp.end()){
                for(auto ix:mp[ans[i]]){
                    if(k>0){
                        res.push_back(ix);
                        k--;
                    }
                }
                mp.erase(ans[i]);
            }
        }
        return res;
    }
};