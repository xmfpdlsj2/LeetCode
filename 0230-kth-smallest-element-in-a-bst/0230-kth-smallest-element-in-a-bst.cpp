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
    int ret{ -1 }, count{};
    void InOrder(TreeNode* root, int k) 
    {
        if (ret != -1)
        {
            return;
        }
        if (!root) 
        {
            return;
        }
        
        InOrder(root->left, k);
        if (++count == k)
        {
            ret = root->val;
        }
        InOrder(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        InOrder(root, k);
        return ret;
    }
};