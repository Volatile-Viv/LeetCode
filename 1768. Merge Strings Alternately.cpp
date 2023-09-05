class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int a = 0;
        int b = 0;

        int m = word1.length();
        int n = word2.length();    

        string s = "";

        for(int i = 0; i < max(m, n); i++)
        {
            if(a != m)
                s += word1[a++];
            
            if(b != n)
                s += word2[b++];
        }
        return s;
    }
};