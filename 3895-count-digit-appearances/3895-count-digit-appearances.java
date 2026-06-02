class Solution {
    public int countDigitOccurrences(int[] nums, int digit) {
        int t=0;
        for(int i=0;i<nums.length;i++){
            while(nums[i]>0){
            if(nums[i]%10==digit)
            t++;
            nums[i]/=10;
            }
        }
        return t;
    }
}