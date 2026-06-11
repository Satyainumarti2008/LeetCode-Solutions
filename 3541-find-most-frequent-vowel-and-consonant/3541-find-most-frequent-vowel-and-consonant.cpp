class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>a;
        for(int i=0;i<s.length();i++){
            a[s[i]]++;
        }
        int max1=0;
        int max2=0;
        for(auto it:a){
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u'){
                max1=max(max1,it.second);
            }
            else{
                max2=max(max2,it.second);
            }
        }
        return max1+max2;
    }
};