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
    ListNode* oddEvenList(ListNode* head) 
    {
        if (head == nullptr)
        {
            return head;
        }
        if(head->next == nullptr)
        {
            return head;
        }

        ListNode* first{ head };
        ListNode* second{ head->next };
        ListNode* odd{ head };
        ListNode* even{ head->next };

        while (odd->next != nullptr)
        {
            if (odd->next->next == nullptr)
            {
                break;
            }
            odd->next = odd->next->next;
            odd = odd->next;

            if (even->next->next == nullptr)
            {
                even->next = nullptr;
                break;
            }
            even->next = even->next->next;
            even = even->next;
        }
        odd->next = second;

        return first;
    }
};