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
    bool isPalindrome(ListNode* head) 
    {
        if(!head || !head->next) return true;

        ListNode* turtle = head;
        ListNode* hare = head;

        stack<int> st;

        while(hare && hare->next)
        {
            st.push(turtle->val);

            turtle = turtle->next;
            hare = hare->next->next;
        }

        if (hare) 
        {
            turtle = turtle->next;
        }
        while(turtle)
        {
            if(turtle->val != st.top())
                return false;
            st.pop();
            turtle = turtle->next;
        }

        return true;

    }
};