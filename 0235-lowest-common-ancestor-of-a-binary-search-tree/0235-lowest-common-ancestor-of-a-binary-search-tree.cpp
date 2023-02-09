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
    void GetAns(TreeNode* root, TreeNode* target, std::vector<std::pair<int, TreeNode*>>& depth)
    {
        depth.push_back({ root->val, root });

        if (root == target)
        {
            return;
        }

        if (root->val < target->val)
        {
            GetAns(root->right, target, depth);
        }
        else
        {
            GetAns(root->left, target, depth);
        }
        return;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (root->left == nullptr || root->right == nullptr)
        {
            return root;
        }
        std::vector<std::pair<int, TreeNode*>> pDepth{}, qDepth{};
        GetAns(root, p, pDepth);
        GetAns(root, q, qDepth);

        int ansIndex{};
        if (pDepth.size() > qDepth.size())
        {
            for (int i = 0; i < qDepth.size(); i++)
            {
                if (pDepth[i].first != qDepth[i].first)
                {
                    return pDepth[i - 1].second;
                }
            }
            return qDepth[qDepth.size() - 1].second;
        }
        else
        {
            for (int i = 0; i < pDepth.size(); i++)
            {
                if (pDepth[i].first != qDepth[i].first)
                {
                    return pDepth[i - 1].second;
                }
            }
            return pDepth[pDepth.size() - 1].second;
        }
    }
};