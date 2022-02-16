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
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> result;
        string tmp = "";
        
        BTP(result,root,tmp);
        
        return result;
    }
    
    void BTP(vector<string>&result,TreeNode* root,string str)
    {
        
        if(root->left==nullptr && root->right==nullptr)
        {
            str = str+std::to_string(root->val);
            result.push_back(str);
            return;
        }
        
        str = str+std::to_string(root->val)+"->";
        
        if(root->left) BTP(result,root->left,str);
        if(root->right) BTP(result,root->right,str);
    }
};