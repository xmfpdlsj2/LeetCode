/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        std::unordered_map<ListNode*, int> table{};
        while (head != nullptr)
        {
            if (table.count(head) == 1)
            {
                return true;
            }
            table[head]++;
            head = head->next;
        }
        return false;
    }
};