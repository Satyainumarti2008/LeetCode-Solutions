class Solution {
    public String reverseWords(String s) {
        String ans="";
        String arr[]=s.split(" ");
        for(int i=0;i<arr.length;i++){
            char[] ch=arr[i].toCharArray();
            int l=0,r=ch.length-1;
            while(l<r){
                char t=ch[l];
                ch[l]=ch[r];
                ch[r]=t;
                l++;
                r--;
            }
            arr[i]=new String(ch);
        }
        for(int i=0;i<arr.length;i++){
            ans+=arr[i];
            if(i<arr.length-1)
                ans+= " ";
        }
        return ans;
    }
}