class Solution {
public:
    void subset(int i,vector<int>&a,vector<int>&v,vector<vector<int>>&ans){
        if(i==a.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(a[i]);
        subset(i+1,a,v,ans);
        v.pop_back();
        while(i+1<a.size()&&a[i]==a[i+1]){
            i++;
        }
        subset(i+1,a,v,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        vector<int> v;
        subset(0,a,v,ans);
        return ans;
    }
};