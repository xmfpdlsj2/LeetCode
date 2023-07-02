/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void Search(TreeNode* original, TreeNode* cloned, TreeNode* target, TreeNode*& cloneHead) {
        if (original == nullptr) return;

        if (original == target) {
            cloneHead = cloned;
            return;
        }

        Search(original->left, cloned->left, target, cloneHead);
        Search(original->right, cloned->right, target, cloneHead);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        Search(original, cloned, target, cloned);
        return cloned;
    }
};