class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            char currentChar = s[i];
            if (!stk.empty() && ((stk.top() == 'A' && currentChar == 'B') || (stk.top() == 'C' && currentChar == 'D'))) {
                stk.pop();
            } else {
                stk.push(currentChar);
            }
        }
        int minLength = stk.size();
        return minLength;
    }
};