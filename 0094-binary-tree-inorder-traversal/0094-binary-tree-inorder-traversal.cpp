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
    void GetInOrder(TreeNode* root, std::vector<int>& order)
    {
        if (root == nullptr)
        {
            return;
        }

        if (root->left == nullptr && root->right == nullptr)
        {
            order.push_back(root->val);
            return;
        }

        if (root->left != nullptr)
        {
            GetInOrder(root->left, order);
        }

        order.push_back(root->val);

        if (root->right != nullptr)
        {
            GetInOrder(root->right, order);
        }

        return;
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        std::vector<int> order{};
        GetInOrder(root, order);
        return order;
    }
};