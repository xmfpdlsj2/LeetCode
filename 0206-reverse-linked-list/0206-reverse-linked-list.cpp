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
        // base case
        if (head == nullptr || head->next == nullptr)
        {
             return head;
        }

        // recursive case
        auto next = head;
        auto nextHead = head->next;
        head = reverseList(head->next);

        next->next = nullptr;
        nextHead->next = next;

        return head;
    }
};