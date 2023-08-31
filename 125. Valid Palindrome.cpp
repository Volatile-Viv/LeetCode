class Solution {
public:
    bool isPalindrome(string s) 
    {
        string str = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
                str += s[i];
        }

        for (auto &x : str)
        {
            x = tolower(x);
        }

        int lp = 0;
        int rp = str.size() - 1;

        while (lp < rp)
        {
            if (str[lp++] != str[rp--])
                return false;
        }
        return true;
    }
};