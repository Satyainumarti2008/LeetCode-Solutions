class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>s;
        unordered_map<int,int>mp1,mp2;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    mp1[i]=i;
                    mp2[j]=j;
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++){
                if(mp1.find(i)!=mp1.end()){
                    matrix[i][j]=0;
                }
                if(mp2.find(j)!=mp2.end()){
                    matrix[i][j]=0;
                }
            }
        }
    }
};