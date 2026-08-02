class Solution {
public:
    int stairs(int n,vector<int>&s){
        if(n<=2){
            return n;
        }
        if(s[n]!=-1){
            return s[n];
        }
        s[n]=stairs(n-1,s)+stairs(n-2,s);
        return s[n];
    }
    int climbStairs(int n) {
        vector<int>s(n+1,-1);
        return stairs(n,s);
    }
};