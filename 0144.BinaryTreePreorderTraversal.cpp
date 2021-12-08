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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> result;
        if(!root) return result;
        
        find(root,result);
        
        return result;   
    }
    
    void find(TreeNode* current,vector<int> &result)
    {
        if(!current) return;
        
        result.push_back(current->val);
        find(current->left,result);
        find(current->right,result);
    }
};