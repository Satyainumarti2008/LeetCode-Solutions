class Solution {
public:
    int pivotInteger(int n) {
        int tsum=0,s=0;
        for(int i=1;i<=n;i++)
            tsum+=i;
        for(int i=1;i<=n;i++){
            s+=i;
            if(tsum-s==s-i)
                return i;
        }
        return -1;
    }
};