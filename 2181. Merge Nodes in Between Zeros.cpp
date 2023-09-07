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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* ptr = new ListNode();
        ListNode* ans = ptr;

        while(head)
        {
            int sum = 0;

            while (head && head->val != 0) 
            {
                sum += head->val;
                head = head->next;
            }

            if (head && head->val == 0) 
            {
                head = head->next; 
            }

            ListNode* temp = new ListNode(sum);
            ptr->next = temp;
            ptr = ptr->next;

        }    
        return ans->next->next;
    }
};