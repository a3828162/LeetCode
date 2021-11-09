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

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = NULL;
        BST(nums, 0, nums.size() - 1, root);
        return root;
    }
    
    void BST(vector<int>& nums, int s, int e, TreeNode*& n)
    {
        if(s > e) return;
        int mid = (s + e) / 2;
        n = new TreeNode(nums[mid]);
        BST(nums, s, mid - 1, n->left);
        BST(nums, mid + 1, e, n->right);
    }
};