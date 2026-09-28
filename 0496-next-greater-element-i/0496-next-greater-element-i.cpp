class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> s;
        for(int i = 0; i < nums1.size(); i++){
            bool flag = false;
            int val = -1;
            for(int j = 0; j < nums2.size(); j++){
                bool b = false;
                if(nums1[i] == nums2[j]){
                    flag = true;
                }
                while(flag && nums2[j] > nums1[i]){
                    val = nums2[j];
                    b = true;
                    break;
                }
                if(b){
                    break;
                }
            }
            s.push_back(val);
        }
        return s;
    }
};