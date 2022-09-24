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
    int pathSum(TreeNode* root, int target) {
        int count=0,sum=0;
        map<long long,long long>m;
        m.insert({0,1});
        f(root,sum,target,m,count);
        return count;
    }
    void f(TreeNode* root,long long sum,int target,map<long long ,long long>&m,int &count)
    {
        if(!root)return ;
        sum = sum + root->val;
        if(m.find(sum-target)!=m.end())
            count = count + m[sum-target];
        m[sum]++;
        
        f(root->left,sum,target,m,count);
        f(root->right,sum,target,m,count);
        
        m[sum]--;
        sum -= root->val;
    
    }
};


// Time Complexity: O(N)
// Space Complexity: O(N)

