class Solution {
public:
    void sum1(int index,vector<int>& candidates,int target,vector<vector<int>>&ans,vector<int>&temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0||index==candidates.size())
            return;
        temp.push_back(candidates[index]);
        sum1(index,candidates,target-candidates[index],ans,temp);
        temp.pop_back();
        sum1(index+1,candidates,target,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sum1(0,candidates,target,ans,temp);
        return ans;
    }
};