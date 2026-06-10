class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c=0;
        for(int i=0;i<items.size();i++){
            for(int j=0;j<items[i].size();j++){
                if(ruleKey=="type"&&j==0&&ruleValue==items[i][j])
                    c++;
                else if(ruleKey=="color"&&j==1&&ruleValue==items[i][j])
                    c++;
                else if(ruleKey=="name"&&j==2&&ruleValue==items[i][j])
                    c++;   
            }
        }
        return c;
    }
};