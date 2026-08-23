class Solution {
    public int countGoodTriplets(int[] arr, int a, int b, int c) {
        int x = 0;
        for(int i = 0;i < arr.length-2; i++){
            int j = i+1, k = j+1;
            while(j < arr.length-1){
                if(Math.abs(arr[i] - arr[j]) <= a && Math.abs(arr[j] - arr[k]) <= b && Math.abs(arr[i] - arr[k]) <= c){
                    x++;
                }
                k++;
                if(k==arr.length){
                    j++;
                    k = j + 1;
                }
            }
        }
        return x;
    }
}