class Solution {
    public String truncateSentence(String s, int k) {
        String t="";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==' '){
                k--;
                if(k<=0)
                return t;
            }
            t+=s.charAt(i);
        }
        return t;
    }
}