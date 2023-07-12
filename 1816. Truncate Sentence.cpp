class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int i, m = 0;

        for (i = 0; i <= s.length(); i++)
        {
            if (s[i] == ' ')
                m++;

            if (m == k)
                break;
        }

        return s.substr(0, i);
    }
};