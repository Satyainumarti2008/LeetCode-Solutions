class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        vector<char> v(n,1);
        v[0]=v[1]=0;
        for(int i=2;i*i<n;i++){
            if(v[i]){
                for(int j=i*i;j<n;j+=i)
                    v[j]=0;
            }
        }
        int t=0;
        for(int i=2;i<n;i++)
            t+=v[i];
        return t;
    }
};