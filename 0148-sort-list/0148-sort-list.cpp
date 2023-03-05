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
    struct Comp
    {
        bool operator()(ListNode* a, ListNode* b)
        {
            return a->val > b->val;
        }
    };
    ListNode* sortList(ListNode* head) 
    {
        if (head == nullptr)
        {
            return head;
        }
        if(head->next == nullptr)
        {
            return head;
        }

        ListNode* first{};
        ListNode* second{};

        std::priority_queue<ListNode*, std::vector<ListNode*>, Comp> pq{};

        while (head != nullptr)
        {
            pq.push(head);
            head = head->next;
        }

        first = pq.top();
        second = pq.top();
        pq.pop();

        while (!pq.empty())
        {
            second->next = pq.top();
            pq.pop();

            second = second->next;
        }
        second->next = nullptr;
        
        return first;
    }
};