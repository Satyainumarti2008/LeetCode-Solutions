class Solution {
public:
    void sums(int index,int &sum,vector<int>&nums,vector<int>&curr){
        if(index==nums.size()){
            int x=0;
            for(int i:curr)
                x^=i;
            sum+=x;
            return;
        }
        curr.push_back(nums[index]);
        sums(index+1,sum,nums,curr);
        curr.pop_back();
        sums(index+1,sum,nums,curr);

    }
    int subsetXORSum(vector<int>& nums) {  
        vector<int>curr;
        int sum=0;
        sums(0,sum,nums,curr);
        return sum;
    }
};