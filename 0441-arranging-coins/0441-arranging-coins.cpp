class Solution {
public:
    int arrangeCoins(int n) {
        int c=0;
        int temp=n;
        for(int i=1;i<=n;i++){
            if(temp-i>=0){
                temp-=i;
                c++;
            }
            else 
                break;
        }
        return c;
    }
};