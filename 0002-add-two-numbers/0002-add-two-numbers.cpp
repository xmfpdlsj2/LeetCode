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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int moc{}, namerji{};

        ListNode* pR{ new ListNode() };
        ListNode* head = pR;
        int l1Val{}, l2Val{};
        while (l1 != nullptr || l2 != nullptr)
        {
            l1Val = 0;
            l2Val = 0;
            if (l1 != nullptr)
            {
                l1Val = l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                l2Val = l2->val;
                l2 = l2->next;
            }

            int sum = l1Val + l2Val + moc;
            moc = sum >= 10 ? 1 : 0;
            namerji = sum >= 10 ? sum - 10 : sum;

            pR->val = namerji;

            if (moc != 0 && pR->next == nullptr)
            {
                ListNode* next{ new ListNode() };
                next->val = moc;
                pR->next = next;
                pR = pR->next;
            }
            else
            {
                if (l1 == nullptr)
                {
                    if (l2 == nullptr)
                    {
                            break;
                    }
                }
                ListNode* next{ new ListNode() };
                pR->next = next;
                pR = pR->next;
            }
        }
        return head;
    }
};