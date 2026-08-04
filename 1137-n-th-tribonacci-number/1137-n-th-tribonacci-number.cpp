class Solution {
public:
    int sol(int n,vector<int>& trib){
        if(n<=1){
            return n;
        }
        if(n==2){
            return 1;
        }
        if(trib[n]!=-1){
            return trib[n];
        }
        trib[n]=sol(n-1,trib)+sol(n-2,trib)+sol(n-3,trib);
        return trib[n];
    }
    int tribonacci(int n) {
        vector<int>trib(n+1,-1);
        return sol(n,trib);
    }
};