class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int>t;
        for(int i=2;i<=n;i++){
            if(i%3==0||i%5==0||i%7==0)
                t.push_back(i);
        }
        int c=0;
        for(int i=0;i<t.size();i++){
            c+=t[i];
        }
        return c;
    }
};