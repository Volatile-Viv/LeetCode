class Solution {
public:
    ListNode* rotate(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* newHead = head;
        ListNode* tail = head;

        while (tail->next->next != nullptr) {
            tail = tail->next;
            newHead = newHead->next;
        }

        tail->next = nullptr;

        tail = newHead;

        newHead = newHead->next;

        tail->next = head;

        return newHead;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        int length = 1;
        ListNode* tail = head;

        while (tail->next != nullptr) {
            tail = tail->next;
            length++;
        }

        k = k % length;

        if (k == 0) {
            return head;
        }

        ListNode* newTail = head;
        for (int i = 0; i < length - k - 1; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;

        tail->next = head;

        newTail->next = nullptr;

        return newHead;
    }
};
