class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        int ans=1;
        for(auto i:nums)
            pq.push(i);
        int t=2;
        while(t>0){
            ans*=pq.top()-1;
            pq.pop();
            t--;
        }
        return ans;
    }
};