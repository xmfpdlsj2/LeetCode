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
    void PostOrder(Node* node, std::vector<int>& postOrder)
    {
        if (!node)
        {
            return;
        }
        for (auto& e : node->children)
        {
            PostOrder(e, postOrder);
        }
        postOrder.push_back(node->val);
    }
    vector<int> postorder(Node* root) 
    {
        std::vector<int> postOrder{};
        PostOrder(root, postOrder);
        return postOrder;
    }
};
