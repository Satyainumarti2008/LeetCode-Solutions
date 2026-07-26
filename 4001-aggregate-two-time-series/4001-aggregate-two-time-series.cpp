class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int i=0,j=0;
        int n=series1.size(),m=series2.size();
        vector<vector<int>> ans;
        while(i<n||j<m){
            int t;
            if(i==n)
                t=series2[j][0];
            else if(j==m)
                t=series1[i][0];
            else
                t=min(series1[i][0],series2[j][0]);
            int val=0;
            if(i<n)
                val+=series1[i][1];
            if(j<m)
                val+=series2[j][1];
            ans.push_back({t,val});
            if(i<n&&series1[i][0]==t)
                i++;
            if(j<m&&series2[j][0]==t)
                j++;
        }
        return ans;
    }
};