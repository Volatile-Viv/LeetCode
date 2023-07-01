class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        unordered_map<char, int> mp;
        int count = 0;

        for(char stone : stones)
        {
            mp[stone]++;
        }

        for(char jewel : jewels)
        {
            if(mp.find(jewel) != mp.end())
                count += mp[jewel];
        }
        return count;
    }
};