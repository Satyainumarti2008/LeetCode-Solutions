class Solution {
    public int[] resultArray(int[] nums) {
        if(nums.length==1){
            return nums;
        }
        int[] arr1=new int[nums.length];
        int[] arr2=new int[nums.length];
        int j=0,k=0;
        arr1[j++]=nums[0];
        arr2[k++]=nums[1];
        for(int i=2;i<nums.length;i++){
            if(arr1[j-1]>arr2[k-1]){
                arr1[j++]=nums[i];
            }
            else{
                arr2[k++]=nums[i];
            }
        }
        int i=0;
        while(i<k){
            arr1[j++]=arr2[i++];
        }
        return arr1;
    }
}