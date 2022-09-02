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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        queue<TreeNode*>q;
        if(root==NULL)return v;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int>v1;
            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
                v1.push_back(node->val); 
            }
            double sum=0;
            
            for(int i=0;i<v1.size();i++)
            {
                sum = sum+v1[i];
            }
            v.push_back(sum/v1.size());
         
        }
        
        return v;
        
    }
};