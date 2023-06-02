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
    int getDecimalValue(ListNode* head) {
        int ret{head->val};
        head = head->next;

        while (head)
        {
            if (head->val == 1) {
                ret <<= 1;
                ret++;
            }
            else {
                ret <<= 1;
            }
            head = head->next;
        }
        return ret;
    }
};