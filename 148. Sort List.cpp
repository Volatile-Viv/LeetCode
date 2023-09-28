class Solution {
public:
    ListNode* sortList(ListNode* head) 
    {
        vector<int> v;
        ListNode* temp = head;
        
        while(temp)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }

        sort(v.begin(), v.end());
        ListNode* curr = head;

        for(int i=0;i<v.size();i++)
        {
            curr->val = v[i];
            curr = curr->next;
        }
        return head;
    }
    

};