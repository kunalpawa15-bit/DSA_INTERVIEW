class Solution {
public:
    bool isValidBST(TreeNode* root) {
        
        if(isBST(root,NULL,NULL))return true;
        
        return false;
    }
    
    bool isBST(TreeNode* root,TreeNode* min,TreeNode* max)
    {
        if(root==NULL)return true;
        
        if(min!= NULL && root->val <= min->val)return false;
        if(max != NULL && root->val >= max->val)return false;
        
        return isBST(root->left,min,root) && isBST(root->right,root,max);
    }
};