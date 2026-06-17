class Solution {
    public int xorOperation(int n, int start) {
        int res=start;
        while(n>1){
            start+=2;
            res^=start;
            n--;
        }
        return res;
    }
}