class Solution {
public:
    void sum2(int index,vector<int>& candidates,int& target,vector<vector<int>>& ans,vector<int>& temp,int& sum){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(index==candidates.size()){
            return;
        }
        if(sum>target)
            return;
        sum+=candidates[index];
        temp.push_back(candidates[index]);
        sum2(index+1,candidates,target,ans,temp,sum);
        temp.pop_back();
        sum-=candidates[index];
        while(index+1<candidates.size()&&candidates[index]==candidates[index+1])
            index++;
        sum2(index+1,candidates,target,ans,temp,sum);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        int sum=0;
        sum2(0,candidates,target,ans,temp,sum);
        return ans;
    }
};