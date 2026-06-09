class Solution {
    public int reverseDegree(String s) {
        int c=0;
        for(int i=0;i<s.length();i++){
            c+=('z'-s.charAt(i)+1)*(i+1);
        }
        return c;
    }
}