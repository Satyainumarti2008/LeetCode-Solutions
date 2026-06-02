class Solution {
    public int[] rearrangeArray(int[] nums) {
        int[]a=new int[nums.length/2];
        int[]b=new int[nums.length/2];
        int j=0;
        int k=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>0)
                a[j++]=nums[i];
            else
                b[k++]=nums[i];
        }
        int l=0;
        int m=0;
        for(int i=0;i<nums.length;i++){
            if(i%2==0)
                nums[i]=a[l++];
            else
                nums[i]=b[m++];
        }
        return nums;
    }
}