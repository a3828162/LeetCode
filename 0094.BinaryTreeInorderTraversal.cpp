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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        
        Inorder(root,ans);
        
        return ans;
    }
    
    void Inorder(TreeNode* current,vector<int>& ans)
    {
        if(!current) return;
        Inorder(current->left,ans);
        ans.push_back(current->val);
        Inorder(current->right,ans);
        
    }
};