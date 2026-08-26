class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        int temp=num;
        while(temp>0)
        {
            if(temp%2==0){
                temp/=2;
                c++;
            }
            else{
                temp-=1;
                c++;
            }
        }
         return c;
    }
};