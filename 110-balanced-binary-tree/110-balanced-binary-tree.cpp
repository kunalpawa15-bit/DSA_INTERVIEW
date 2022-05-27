class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
        return height(root)!=-1;
        
    }
    
    int height(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int l = height(root->left);
        int r = height(root->right);
        
        if(l==-1 || r==-1)return -1;
        if(abs(l-r)>1)return -1;
        
        return 1 + max(l,r);
    }
};