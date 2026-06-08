class Solution {
    public boolean isHappy(int n) {
        if(n<6&&n!=1)
            return false;
        while(n>6){
            int t=n;
            int sum=0;
                while(t>0){
                    int r=t%10;
                    sum+=r*r;
                    t/=10;
                }
            n=sum;
        }
        if(n==1)
            return true;
        else
            return false;
    }
}