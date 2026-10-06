class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        int maxFreq = 0;
        unordered_map<char, int>mp;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
            maxFreq = max(maxFreq, mp[s[i]]);
        }
        while(maxFreq > 0){
            for(auto i :mp){
                if(i.second == maxFreq){
                    int t=maxFreq;
                    while(t > 0){
                        ans += i.first;
                        t--;
                    }
                }
            }
            maxFreq--;
        }
        return ans;
    }
};