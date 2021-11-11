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
    int minDepth(TreeNode* root) {
        
        if(!root) return 0;
        
        return minDepth(root,1);
    }
    
    int minDepth(TreeNode* current, int currentDepth)
    {
        
        if(!current) return INT_MAX;
        
        if(!current->left&&!current->right) return currentDepth;
        
        return std::min(minDepth(current->left,currentDepth+1),minDepth(current->right,currentDepth+1));
    }
};