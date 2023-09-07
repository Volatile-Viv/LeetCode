class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> mp;

        for(int n:nums)
        {
            mp[n]++;
            if(mp[n] > 1)
                return n;
        }
        return -1;
    }
};