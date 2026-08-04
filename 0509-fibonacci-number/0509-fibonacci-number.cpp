class Solution {
public:
    int fibcal(int n,vector<int>& fibo){
        if(n<=1){
            return n;
        }
        if(fibo[n]!=-1){
            return fibo[n];
        }
        fibo[n]=fibcal(n-1,fibo)+fibcal(n-2,fibo);
        return fibo[n];
    }
    int fib(int n) {
        vector<int>fibo(n+1,-1);
        return fibcal(n,fibo);
    }
};