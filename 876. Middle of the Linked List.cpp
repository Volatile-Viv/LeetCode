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
    ListNode* middleNode(ListNode* head) 
    {
        int k = 0;

        ListNode* ptr = head;

        while(ptr)
        {
            k++;
            ptr = ptr->next;
        }    
        k = k/2;
        ptr = head;

        while(k--)
        {
            ptr = ptr->next;
        }

        return ptr;
    }
};