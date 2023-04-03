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
    void FindDepth(TreeNode* root, int depth, int& result)
    {
        if (!root)
        {
            return;
        }
        
        result = std::max(result, depth);
        FindDepth(root->left, depth + 1, result);
        FindDepth(root->right, depth + 1, result);
    }
    int maxDepth(TreeNode* root) 
    {
        int ret{};
        FindDepth(root, 1, ret);
        return ret;
    }
};
