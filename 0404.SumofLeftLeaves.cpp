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
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum = 0;
        
        addSum(root, root, sum);
        
        return sum;
    }
    
    void addSum(TreeNode* p,TreeNode* c,int &sum)
    {
        if(!c) return;
        
        if(c->left==nullptr&&c->right==nullptr&&p->left==c) sum+=c->val;
        
        addSum(c, c->left,sum);
        addSum(c, c->right, sum);
    }
};