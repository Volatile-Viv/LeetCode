#include <vector>
#include <unordered_set>

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> numSet;
        int duplicate = -1;
        
        for (int num : nums) 
        {
            if (numSet.count(num) == 0) 
            {
                numSet.insert(num);
            } 
            else 
            {
                duplicate = num;
            }
        }
        
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2;
        int actualSum = accumulate(nums.begin(), nums.end(), 0);
        
        int missing = expectedSum - actualSum + duplicate;
        
        ans.push_back(duplicate);
        ans.push_back(missing);
        
        return ans;
    }
};
