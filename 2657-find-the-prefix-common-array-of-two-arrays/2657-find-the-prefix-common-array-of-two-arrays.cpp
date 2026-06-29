class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>map;
        unordered_map<int,int>n;
        vector<int>v;
        int c=0;
        for(int i=0;i<A.size();i++){
            map[A[i]]++;
            map[B[i]]++;
            if(map[A[i]]>1&&n.find(A[i])==n.end()){
                n[A[i]]++;
                c++;
            }
            if(map[B[i]]>1&&n.find(B[i])==n.end()){
                n[B[i]]++;
                c++;
            }
            v.push_back(c);
        }
        return v;
    }
};