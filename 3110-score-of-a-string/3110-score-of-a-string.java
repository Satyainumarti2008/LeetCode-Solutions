class Solution {
    public int scoreOfString(String s) {
        int c=0;
        for(int i=1;i<s.length();i++){
            c+=Math.abs(s.charAt(i-1)-s.charAt(i));
        }
        return c;
    }
}