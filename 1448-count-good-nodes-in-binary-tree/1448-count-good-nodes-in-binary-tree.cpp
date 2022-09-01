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
    int goodNodes(TreeNode* root) {
       
        return f(root,INT_MIN);
    }
    int f(TreeNode* root,int maxi)
    {
        if(!root)return 0;
        if(root->val < maxi)
            return f(root->left,maxi) + f(root->right,maxi);
        return 1 + f(root->left,root->val) + f(root->right,root->val);
    }
};