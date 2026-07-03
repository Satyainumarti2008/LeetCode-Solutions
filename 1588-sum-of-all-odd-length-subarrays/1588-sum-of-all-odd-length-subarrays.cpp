class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int s,k;
        for(int i=0;i<arr.size();i++){
            s=0,k=1;
            for(int j=i;j<arr.size();j++){
                s+=arr[j];
                if(k%2!=0)
                    sum+=s;
                k++;
            }
        }
        return sum;
    }
};