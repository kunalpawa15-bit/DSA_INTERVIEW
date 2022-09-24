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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>>ans;
        vector<int>v;
        f(root,sum,ans,v);
        return ans;
    }
    void f(TreeNode* root,int sum,vector<vector<int>>&ans,vector<int>&v)
{
    if(!root)return;
    sum -= root->val;
    v.push_back(root->val);
    
    if(sum==0 && !root->left && !root->right)
    {
        ans.push_back(v);
    }
    
    f(root->left,sum,ans,v);
    f(root->right,sum,ans,v);
    v.pop_back();
    
}
};

