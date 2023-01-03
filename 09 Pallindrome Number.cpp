class Solution {
public:
    bool isPalindrome(int x) {
        long digit, newNum = 0, temp = x;

        while(temp > 0){
            digit = temp % 10;
            newNum = (newNum * 10) + digit;
            temp = temp / 10;
        }

        if (newNum == x)
            return 1;
        else
            return 0;
    }
};