class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int c=0,sum=0;
        for(int i=0;i<arr.size();i++){
            if(i<k){
                sum+=arr[i];
            }
            else{
                if(sum/k>=threshold){
                    c++;
                }
                sum-=arr[abs(k-i)];
                sum+=arr[i];
            }
        }
        if(sum/k>=threshold){
            c++;
        }
        return c;
    }
};