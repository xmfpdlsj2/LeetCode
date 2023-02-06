/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) 
    {
        std::vector<int> result{};
        if (root == nullptr)
        {
            return result;
        }
        result.push_back(root->val);

        // base case
        if (root->children.empty())
        {
            return result;
        }

        // recursive case
        for (auto& e : root->children)
        {
            auto rec = preorder(e);
            for (auto& child : rec)
            {
                result.push_back(child);
            }
        }
        return result;
    }
};