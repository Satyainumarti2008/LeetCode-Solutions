class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size(),c=grid[0].size(),n=r*c;
        k%=n;
        vector<vector<int>> ans(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int cur=i*c+j;
                int next=(cur+k)%n;
                ans[next/c][next%c]=grid[i][j];
            }
        }
        return ans;
    }
};