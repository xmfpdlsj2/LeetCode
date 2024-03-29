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
    vector<double> averageOfLevels(TreeNode* root) {
        std::vector<double> ret;
        if (root == nullptr) return ret;
        std::queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            int levelsize = q.size();
            double sum = 0;
            for (int i = 0; i < levelsize; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left) { q.push(temp->left); }
                if (temp->right) { q.push(temp->right); }
                sum += temp->val;
            }
            double avg = sum / levelsize;
            ret.push_back(avg);
        }
        return ret;
    }
};