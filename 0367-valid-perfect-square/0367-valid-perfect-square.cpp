class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=1,r=num;
        while(l<=r){
            long mid=l+(r-l)/2;
            long long s=mid*mid;
            if(s==num)
                return true;
            else if(s<num)
                l=mid+1;
            else 
                r=mid-1;
        }
        return false;
    }
};