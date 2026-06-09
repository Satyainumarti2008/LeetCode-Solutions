class Solution {
    public String addBinary(String a, String b) {
        String s="";
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        while(i>=0&&j>=0){
            int d1=a.charAt(i)-'0';
            int d2=b.charAt(j)-'0';
            int x=d1+d2+carry;
            if(x==0){
                s+='0';
                carry=0;
            }
            else if(x==1){
                s+='1';
                carry=0;
            }
            else if(x==2){
                s+='0';
                carry=1;
            }
            else{
                s+='1';
                carry=1;
            }
            i-=1;
            j-=1;
        }
        while(i>=0){
            int d1=a.charAt(i)-'0';
            int x=d1+carry;
            if(x==0){
                s+='0';
                carry=0;
            }
            else if(x==1){
                s+='1';
                carry=0;
            }
            else{
                s+='0';
                carry=1;
            }
            i-=1;
        }
        while(j>=0){
            int d2=b.charAt(j)-'0';
            int x=d2+carry;
            if(x==0){
                s+='0';
                carry=0;
            }
            else if(x==1){
                s+='1';
                carry=0;
            }
            else{
                s+='0';
                carry=1;
            }
            j-=1;
        }
        if(carry==1)
        s+=carry;
        String o=new StringBuilder(s).reverse().toString();
        return o;
    }
}