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
    int CheckBalance(TreeNode* root)
    {
        if (root == nullptr)
        {
            return 0;
        }
    
        int leftH = CheckBalance(root->left);
        int rightH = CheckBalance(root->right);
        
        if (leftH == -1 || rightH == -1 || std::abs(leftH - rightH) > 1)
        {
            return -1;
        }
        
        return std::max(leftH, rightH) + 1;

    }
    bool isBalanced(TreeNode* root)
    {
        if (root == nullptr)
        {
            return true;
        }
        return (CheckBalance(root) != -1);
    }
};