/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        ListNode* left{ head };
        std::stack<int> stack{};
        while (head != nullptr)
        {
            stack.push(head->val);
            head = head->next;
        }

        int travel = (stack.size() / 2);
        for (int i = 0; i < travel; i++)
        {

            if (left->val != stack.top())
            {
                return false;
            }
            left = left->next;
            stack.pop();
        }
        return true;
    }
};