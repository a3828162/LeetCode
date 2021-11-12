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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        
        return equalSum(root,targetSum, 0);
    }
    
    bool equalSum(TreeNode* current,int target,int V)
    {     
        if(!current) return false;
        V+=current->val;
        
        if(!current->left&&!current->right) return (V==target?true:false);
        
        return equalSum(current->left,target,V) || equalSum(current->right,target,V);
    }
};