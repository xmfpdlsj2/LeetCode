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
    int level{};
    std::vector<std::vector<int>> lvOrder{};
    std::vector<std::vector<int>> levelOrder(TreeNode* root)
    {
        // base case
        if (root == nullptr)
        {
            return lvOrder;
        }

        if (level >= lvOrder.size())
        {
            lvOrder.push_back(std::vector<int>{});
        }
        if (root->left == nullptr && root->right == nullptr)
        {
            lvOrder[level].push_back(root->val);
            level--;
            return lvOrder;
        }

        // recursive case
        lvOrder[level].push_back(root->val);

        if (root->left != nullptr)
        {
            level++;
            lvOrder = levelOrder(root->left);
        }

        if (root->right != nullptr)
        {
            level++;
            lvOrder = levelOrder(root->right);
        }

        level--;
        return lvOrder;
    }
};