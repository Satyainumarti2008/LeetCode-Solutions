class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i <= right; i++)
        {
            bool flag = true;
            int t = i;
            while(t > 0){
                int r = t % 10;
                if(r == 0 || i % r != 0){
                    flag = false;
                }
                if(!flag){
                    break;
                }
                t /= 10;
            }
            if(flag){
                res.push_back(i);
            }
        }
        return res;
    }
};