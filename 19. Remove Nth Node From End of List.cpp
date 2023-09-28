class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if (!head) return head;

        int len = 0;
        ListNode* ptr = head;

        while (ptr) 
        {
            len++;
            ptr = ptr->next;
        }

        if (n >= len) 
        {
            ListNode* toRemove = head;
            head = head->next;
            delete toRemove;
            return head;
        }

        int count = len - n - 1;
        ptr = head;

        while (count--) 
            ptr = ptr->next;

        ListNode* toRemove = ptr->next;
        ptr->next = ptr->next->next;
        delete toRemove;

        return head;
    }
};
