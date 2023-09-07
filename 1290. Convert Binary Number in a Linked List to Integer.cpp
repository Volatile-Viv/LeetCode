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
    int binaryToDecimal(string binary) 
    {
        int decimal = 0;
        int base = 1; 

        for (int i = binary.length() - 1; i >= 0; i--) 
        {
            if (binary[i] == '1') 
            {
                decimal += base; 
            }
            base *= 2; 
        }

        return decimal;
    }

    int getDecimalValue(ListNode* head) 
    {
        int ans;
        string bin = "";

        while(head != NULL)
        {
            int temp = head->val;
            bin += to_string(temp);
            head = head->next;
        }    
        return binaryToDecimal(bin);
    }
};