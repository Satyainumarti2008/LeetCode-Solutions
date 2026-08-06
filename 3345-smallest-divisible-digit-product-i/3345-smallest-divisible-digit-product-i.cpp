class Solution {
public:
    int divisible(int n){
        int temp=n;
        int pro=1;
        while(temp>0){
            pro*=temp%10;
            temp/=10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        int ans=0;
        for(int i=n;i<=100;i++){
            if(divisible(i)%t==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};