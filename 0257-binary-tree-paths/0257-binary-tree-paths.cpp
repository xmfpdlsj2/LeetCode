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
void Path(TreeNode* node, std::string order, std::vector<std::string>& table)
{
	if (!node)
	{
		if (order.empty())
		{
			table.push_back(order);
			return;
		}
		return;
	}


	order = order + std::to_string(node->val) + "->";
	if (!node->left && !node->right)
	{
		order = order.substr(0, order.size() - 2);
		table.push_back(order);
		return;
	}
	Path(node->left, order, table);
	Path(node->right, order, table);

}
std::vector<std::string> binaryTreePaths(TreeNode* root) 
{
	std::string order{};
	std::vector<std::string> table{};
	Path(root, order, table);
	return table;
}
};