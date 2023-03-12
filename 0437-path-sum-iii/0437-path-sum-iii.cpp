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
    int result{};
    void LeftRightSum(TreeNode* root, long long targetSum)
    {
        if (root == nullptr)
        {
            return;
        }
                
        if (root->val == targetSum)
        {
            result++;
        }
        LeftRightSum(root->left, targetSum - root->val);
        LeftRightSum(root->right, targetSum - root->val);
    }
    int pathSum(TreeNode* root, int targetSum) 
    {
        if (root == nullptr)
        {
            return 0;
        }
        LeftRightSum(root, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        return result;
    }
};