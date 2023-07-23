class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_groups;

        for (const string& word : strs) {
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end());

            anagram_groups[sorted_word].push_back(word);
        }

        vector<vector<string>> ans;

        for (const auto& entry : anagram_groups) {
            ans.push_back(entry.second);
        }

        return ans;
    }
};
