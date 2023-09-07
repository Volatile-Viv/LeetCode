class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHalf = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;
        ListNode* current = secondHalf;

        while (current) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        ListNode* firstHalf = head;
        current = prev;

        while (firstHalf && current) {
            ListNode* nextFirstHalf = firstHalf->next;
            ListNode* nextSecondHalf = current->next;

            firstHalf->next = current;
            current->next = nextFirstHalf;

            firstHalf = nextFirstHalf;
            current = nextSecondHalf;
        }
    }
};
