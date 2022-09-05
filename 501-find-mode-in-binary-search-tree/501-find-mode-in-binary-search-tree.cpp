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
    map<int,int>m;
    vector<int> findMode(TreeNode* root) {
        
        f(root);
         int ans = INT_MIN;
        for(auto it:m)
        {
            ans = max(ans,it.second);
        }
        vector<int>res;
        for(auto it:m)
        {
            if(it.second==ans)
                res.push_back(it.first);
        }
        
        return res;
    }
    void f(TreeNode* root)
    {
        
        if(root==NULL)return ;
        if(!m[root->val])m[root->val] = 1;
        else m[root->val]++;
        
        f(root->left);
        f(root->right);
        
    }
};


