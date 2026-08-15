/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDiameter(TreeNode* root, int &maxs){
        if(root==nullptr){
            return 0;
        }
        int left=maxDiameter(root->left,maxs);
        int right=maxDiameter(root->right,maxs);
        maxs=max(maxs,left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxs=0;
        maxDiameter(root,maxs);
        return maxs;
    }
};