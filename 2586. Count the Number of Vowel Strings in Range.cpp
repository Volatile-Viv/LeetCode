class Solution {
public:
    bool isVowel(string word) 
    {
        char first = tolower(word[0]);
        char last = tolower(word[word.length() - 1]);
        return (first == 'a' || first == 'e' || first == 'i' || first == 'o' 
        || first == 'u') && (last == 'a' || last == 'e' || last == 'i' || last == 'o' ||last == 'u');
    }

    int vowelStrings(vector<string>& words, int left, int right) 
    {
        int count = 0;
        for(int i = left; i<=right; i++)
        {
            if(isVowel(words[i]))
                count++;
        }
        return count;
    }
};