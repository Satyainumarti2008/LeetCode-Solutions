class Solution {
    public String processStr(String s) {
        String ans="";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='a'&&s.charAt(i)<='z')
                ans+=s.charAt(i);
            else if(s.charAt(i)=='#'){
                if(ans.length()>0)
                    ans+=ans;
            }
            else if(s.charAt(i)=='%'){
                String t=new StringBuilder(ans).reverse().toString();
                ans=t;
            }  
            else if(s.charAt(i)=='*'){
                if(ans.length()>0)
                ans=ans.substring(0,ans.length()-1);
            }
        }
        return ans;
    }
}