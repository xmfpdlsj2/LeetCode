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
class BSTIterator {
public:
    std::queue<int> mInOrderList{};
    BSTIterator(TreeNode* root) 
    {
        Traversal(root);
    }
    
    void Traversal(TreeNode* root)
    {
        if (!root)
        {
            return;
        }
        Traversal(root->left);
        mInOrderList.push(root->val);
        Traversal(root->right);
    }
    
    int next() 
    {
        int ret = mInOrderList.front();
        mInOrderList.pop();
        return ret;
    }
    
    bool hasNext() 
    {
        return mInOrderList.size() != 0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */