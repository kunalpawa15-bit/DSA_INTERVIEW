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
    int maxPathSum(TreeNode* root) {
        
        int maxi= INT_MIN;
        height(root,maxi);
        return maxi;
        
    }
    
    private:
    int height(TreeNode* node, int &maxi)
    {
        if(node==NULL)return 0;
        int l = max(0,height(node->left,maxi));
        int r = max(height(node->right,maxi),0);
        
        maxi = max(maxi,l+r+node->val);
        
        return max(l,r)+node->val;
    }
};