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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int gap{ 0 };
        ListNode* first{ head };
        ListNode* follow{ head };
        while (head->next != nullptr)
        {
            if (gap >= n)
            {
                follow = follow->next;
            }
            gap++;
            head = head->next;
        }

        if (gap >= n)
        {
            auto temp = follow->next;
            follow->next = follow->next->next;
            delete temp;
        }
        else
        {
            first = first->next;
        }

        return first;
    }
};