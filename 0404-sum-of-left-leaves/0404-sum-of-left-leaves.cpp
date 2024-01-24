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
    int SumOrder(TreeNode* root, bool isLeft)
    {
        // baseCase
        if(!root) return 0;
        if(!root->left && !root->right) return isLeft ? root -> val : 0;

        // recursiveCase
        return SumOrder(root->left, true) + SumOrder(root->right, false);
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        return SumOrder(root, false);
    }
};