class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int ,int>a;
        int t=n;
        while(t>0){
            a[t%10]++;
            t/=10;
        }
        int c=0;
        for(auto it:a){
            c+=it.first*it.second;
        }
        return c;
    }
};