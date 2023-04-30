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
    void Check(TreeNode* p, TreeNode* q, bool& isSame)
    {
        if (!p && !q)
        {
            isSame = isSame ? true : false;
            return;
        }

        if (!p && q || p && !q)
        {
            isSame = false;
            return;
        }

        if (p->val != q->val)
        {
            isSame = false;
            return;
        }
        Check(p->left, q->left, isSame);
        Check(p->right, q->right, isSame);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        bool isSame = true;
        Check(p, q, isSame);
        return isSame;
    }
};