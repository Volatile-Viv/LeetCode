class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if (left == right) 
        {
            return head;
        }
        
        ListNode* dummy = new ListNode();
        dummy->next = head;

        ListNode* prev_left = dummy;
        ListNode* curr = head;
        
        for (int i = 1; i < left; i++) 
        {
            prev_left = curr;
            curr = curr->next;
        }
        
        ListNode* prev = NULL;
        ListNode* tail = curr;
        
        for (int i = left; i <= right; i++) 
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        prev_left->next = prev;
        tail->next = curr;
        
        return dummy->next;
    }
};
