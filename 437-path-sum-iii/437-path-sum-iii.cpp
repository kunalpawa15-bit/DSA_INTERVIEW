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
    
int treeSum(TreeNode* root, long long sum, long long targetSum)
{
    if(!root) return 0;
    
    sum += (long long) root->val;
    
    return treeSum(root->left, sum, targetSum) + treeSum(root->right, sum, targetSum) + ((sum == targetSum) ? 1 : 0); 
    
} 

int pathSum(TreeNode* root, int targetSum) {
   
    if(!root) return 0;
    
    return treeSum(root, 0, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
}
};
