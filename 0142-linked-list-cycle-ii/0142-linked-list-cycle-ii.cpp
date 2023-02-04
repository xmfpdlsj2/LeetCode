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
    ListNode *detectCycle(ListNode *head) 
    {
        if (head == nullptr || head->next == nullptr)
        {
            return nullptr;
        }
        
        std::unordered_map<ListNode*, int> flag {};
        
        while (flag[head] < 1)
        {
            if (head->next == nullptr)
            {
                return nullptr;
            }
            
            flag[head]++;
            head = head->next;
        }
        return head;
    }
};