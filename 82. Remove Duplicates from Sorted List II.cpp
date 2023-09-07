class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        map<int,int> mp;

        ListNode *temp = head;
        while(temp)
        {
            mp[temp->val]++;
            temp=temp->next;
        }

        ListNode* ptr = new ListNode(0);
        temp = ptr;

        for(auto m:mp)
        {
            if(m.second==1)
            {
                temp->next = new ListNode(m.first);
                temp = temp->next;
            }
        }
        return ptr->next;
    }
};