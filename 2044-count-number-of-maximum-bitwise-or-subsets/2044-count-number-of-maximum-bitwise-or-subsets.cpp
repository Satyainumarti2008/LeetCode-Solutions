class Solution {
public:
    void maxsubset(int index,vector<int>& nums,vector<int>temp,int maxbit,int& ans){
        if(index==nums.size()){
            int c=0;
            for(int i=0;i<temp.size();i++){
                c=c|temp[i];
            }
            if(c==maxbit){
                ans++;
            }
            return;
        }
        temp.push_back(nums[index]);
        maxsubset(index+1,nums,temp,maxbit,ans);
        temp.pop_back();
        maxsubset(index+1,nums,temp,maxbit,ans);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxbit=0,ans=0;
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            maxbit=maxbit|nums[i];
        }
        maxsubset(0,nums,temp,maxbit,ans);
        return ans;
    }
};