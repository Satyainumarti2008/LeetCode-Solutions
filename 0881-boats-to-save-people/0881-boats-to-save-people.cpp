class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int c=0;
        sort(people.begin(),people.end());
        int sum=0;
        int l=0,r=people.size()-1;
        while(l<=r){
            if(people[l]+people[r]<=limit){
                l++;
            }
            r--;
            c++;
        }
        return c;
    }
};