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
    bool CheckInvalid(TreeNode* root,long low, long high)
    {
        // base case
        if (root == nullptr)
        {
            return true;
        }

        // recursive case
        if (root->val > low && root->val < high)
        {
            return CheckInvalid(root->left, low, root->val) && CheckInvalid(root->right, root->val, high);
        }
        else
        {
            return false;
        }
    }
    bool isValidBST(TreeNode* root)
    {
        return CheckInvalid(root, LONG_MIN, LONG_MAX);
    }
};