class Solution {
    public int[] findDegrees(int[][] matrix) {
        int[] a=new int[matrix.length];
        for(int i=0;i<matrix.length;i++){
            int s=0;
            for(int j=0;j<matrix[i].length;j++){
                s+=matrix[i][j];
            }
            a[i]=s;
        }
        return a;
    }
}