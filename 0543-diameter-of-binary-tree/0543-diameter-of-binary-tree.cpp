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
    int max{};
    int Depth(TreeNode* root)
    {
        if (root == nullptr)
        {
            return 0;            
        }
        
        int left = Depth(root->left);
        int right = Depth(root->right);
        
        max = std::max(max, left+right);
        return (1 + std::max(left, right));
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        Depth(root);
        return max;
    }
};