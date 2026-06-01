class Solution {
    public int[] leftRightDifference(int[] nums) {
        int[]a=new int[nums.length];
        int[]b=new int[nums.length];
        a[0]=0;
        int s=0;
        int t=0;
        for(int i=1;i<nums.length;i++){
            s+=nums[i-1];
            a[i]=s;
        }
        b[nums.length-1]=0;
        for(int i=nums.length-2;i>=0;i--){
            t+=nums[i+1];
            b[i]=t;
        }
        for(int i=0;i<nums.length;i++){
            a[i]=Math.abs(a[i]-b[i]);
        }
        return a;
    }
}