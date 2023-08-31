class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int lp = 0;
        int rp = numbers.size() - 1;

        vector<int> ans;

        while(lp < rp)
        {
            int sum = numbers[lp] + numbers[rp];

            if(sum == target)
            {
                ans.push_back(++lp);
                ans.push_back(++rp);
                break;
            }
            else if (sum < target)
            {
                lp++;
            }
            else
            {
                rp--;
            }
        }    
        return ans;
    }
};