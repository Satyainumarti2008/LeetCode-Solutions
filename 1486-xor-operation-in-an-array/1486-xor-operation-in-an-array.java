class Solution {
    public int xorOperation(int n, int start) {
        int res=start;
        int r=start+2;
        while(n>1){
            res^=r;
            r+=2;
            n--;
        }
        return res;
    }
}