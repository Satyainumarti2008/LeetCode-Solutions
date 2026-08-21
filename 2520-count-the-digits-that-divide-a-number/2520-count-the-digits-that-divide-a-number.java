class Solution {
    public int countDigits(int num) {
        int c=0,t=num;
        while(t>0){
            int n=t%10;
            if(num%n==0){
                c++;
            }
            t/=10;
        }
        return c;
    }
}