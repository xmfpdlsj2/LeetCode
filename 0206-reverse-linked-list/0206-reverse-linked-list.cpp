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
    ListNode* reverseList(ListNode* head) 
    {
        if (head == nullptr)
        {
            return head;
        }
        // base case
        if (head->next == nullptr)
        {
             return head;
        }

        // recursive case
        auto next = head;
        head = reverseList(head->next);

        next->next = nullptr;
        auto itr = head; 

        while (itr->next != nullptr)
        {
             itr = itr->next;
        }
        itr->next = next;

        return head;
    }
};