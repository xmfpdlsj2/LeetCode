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
    ListNode* mergeKLists(std::vector<ListNode*>& lists)
    {
        std::vector<std::pair<int, ListNode*>> table;

        for (auto& e : lists)
        {
            while (e != nullptr)
            {
                table.push_back({e->val, e});
                e = e->next;
            }
        }
        
        if (table.size() == 0)
        {
            return nullptr;
        }

        std::sort(table.begin(), table.end());

        ListNode* head = table[0].second;
        ListNode* tail = table[0].second;

        for (int i = 1; i < table.size(); i++)
        {
            tail->next = table[i].second;
            tail = tail->next;
        }
        tail->next = nullptr;
        return head;
    }
};