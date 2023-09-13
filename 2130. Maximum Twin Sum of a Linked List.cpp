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

    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }

    int pairSum(ListNode* head) 
    {
        if (!head || !head->next) return 0;

        if(head->next->next == nullptr) return (head->val + head->next->val);

        ListNode* turtle = head;
        ListNode* hare = head;

        while (hare->next && hare->next->next) 
        {
            turtle = turtle->next;
            hare = hare->next->next;
        }

        ListNode* l1 = head;
        ListNode* l2 = reverse(turtle->next);
        
        int max = 0;

        while(l2)
        {
            int temp;

            temp = l1->val + l2->val;

            max = temp > max ? temp:max;

            l1 = l1->next;
            l2 = l2->next;
        }

        return max;
    }
};