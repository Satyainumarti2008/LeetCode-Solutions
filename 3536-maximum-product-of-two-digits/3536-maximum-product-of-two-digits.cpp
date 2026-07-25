class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        int temp=n;
        while(temp>0){
            arr.push_back(temp%10);
            temp/=10;
        }
        sort(arr.begin(),arr.end());
        return arr[arr.size()-1]*arr[arr.size()-2];
    }
};