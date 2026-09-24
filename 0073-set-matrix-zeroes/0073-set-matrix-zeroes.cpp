class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> s1, s2;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(s1.count(i) || s2.count(j)){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};