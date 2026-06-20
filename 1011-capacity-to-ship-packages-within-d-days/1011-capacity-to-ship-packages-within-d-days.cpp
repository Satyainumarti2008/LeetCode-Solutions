class Solution {
public:
    int find(int m,int d,vector<int>w){
        int s=0;
        int c=0;
        for(int i=0;i<w.size();i++){
            if(s+w[i]<=m)
                s+=w[i];
            else{
                c+=1;
                s=w[i];
            }
        }
        return c+1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxs=-1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            maxs=max(maxs,weights[i]);
            sum+=weights[i];
        }
        int l=maxs,r=sum;
        while(l<r){
            int mid=(l+r)/2;
            if(find(mid,days,weights)<=days)
                r=mid;
            else
                l=mid+1;
        }
        return r;
    }
};