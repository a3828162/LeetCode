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
    vector<int> findMode(TreeNode* root) {
        vector<int> answer;
        unordered_map<int, int> m;
        Mode(root,m);
    
        int maxcount = 0;
        for(auto i=m.begin();i!=m.end();++i) if(i->second > maxcount) maxcount = i->second;
        for(auto i=m.begin();i!=m.end();++i) if(i->second == maxcount) answer.push_back(i->first);

        return answer;
    }

    void Mode(TreeNode* now, unordered_map<int,int> &m)
    {
        if(!now) return;
        m[now->val]++;
        Mode(now->left,m);
        Mode(now->right,m);
    }
};