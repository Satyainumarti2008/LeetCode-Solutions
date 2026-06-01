class Solution {
    public int[] minOperations(String boxes) {
        int[]a=new int[boxes.length()];
        for(int i=0;i<boxes.length();i++){
            int s=0;
            for(int j=0;j<boxes.length();j++){
                if(boxes.charAt(j)=='1'){
                    s+=Math.abs(i-j);
                }
            }
            a[i]=s;
        }
        return a;
    }
}