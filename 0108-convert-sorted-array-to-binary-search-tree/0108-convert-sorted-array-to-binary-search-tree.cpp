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
    TreeNode* MakeBST(vector<int>& nums, int s, int e) 
    {
        if (s > e)
        {
            return nullptr;
        }
        if (s == e)
        {
            TreeNode* ret{ new TreeNode{ nums[s] } };
            return ret;
        }
        int m = (s + e) / 2;
        auto left = MakeBST(nums, s, m - 1);
        auto right = MakeBST(nums, m + 1, e);

        TreeNode* ret{ new TreeNode{ nums[m] } };
        ret->left = left;
        ret->right = right;
        return ret;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return MakeBST(nums, 0, nums.size() - 1);
    }
};