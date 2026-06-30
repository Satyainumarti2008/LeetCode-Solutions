class Solution {
public:
    int arrangeCoins(int n) {
        int c=0;
        int temp=n;
        for(int i=1;i<=n;i++){
            temp-=i;
            if(temp>=0){
                c++;
            }
            else 
                break;
        }
        return c;
    }
};