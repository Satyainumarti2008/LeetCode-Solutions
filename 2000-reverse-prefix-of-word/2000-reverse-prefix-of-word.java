class Solution {
    public String reversePrefix(String word, char ch) {
        boolean flag=true;
        String s = "";
        for (int i = 0; i < word.length(); i++) {
            s += word.charAt(i);
            if (word.charAt(i) == ch){
                flag=false;
                break;
            }
        }
        if(s.length()==word.length()&&flag)
            return s;
        StringBuilder st = new StringBuilder(s).reverse();
        for (int i = s.length(); i < word.length(); i++) {
            st.append(word.charAt(i));
        }
        return st.toString();
    }
}