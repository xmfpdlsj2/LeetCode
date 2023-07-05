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
      void InOrder(TreeNode* root, int low, int high, int& ret) {
          if (root == nullptr)
          {
              return;
          }

          InOrder(root->left, low, high, ret);
          if (root->val >= low && root->val <= high)
          {
            ret += root->val;
          }
          InOrder(root->right, low, high, ret);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ret{};
        InOrder(root, low, high, ret);
        return ret;
    }
};