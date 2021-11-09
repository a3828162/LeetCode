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
    int maxDepth(TreeNode* root) {
        int max=0, current=0;
        Find(root,max,current + 1);
        
        return max;
    }
    
    void Find(TreeNode* current,int& maxDepth, int currentDepth)
    {
        if(!current) return;
        if(currentDepth>maxDepth) maxDepth = currentDepth;
        Find(current->left,maxDepth,currentDepth+1),Find(current->right,maxDepth,currentDepth+1);
    }
};