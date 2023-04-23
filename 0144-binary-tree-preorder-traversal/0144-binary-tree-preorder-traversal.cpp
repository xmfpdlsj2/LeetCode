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
    void MakePreorder(TreeNode* root, std::vector<int>& ret)
    {
        if (!root)
        {
            return;
        }
            
        ret.push_back(root->val);
        MakePreorder(root->left, ret);
        MakePreorder(root->right, ret);
    }
    vector<int> preorderTraversal(TreeNode* root) 
    {
        std::vector<int> ret{};
        MakePreorder(root, ret);
        return ret;
    }
};