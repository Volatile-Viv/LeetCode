class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = 0;

        int lp = 0;
        int rp = 1;

        while (rp < prices.size())
        {
            if (prices[rp] < prices[lp])
            {
                lp = rp;
            }

            if (prices[rp] > prices[lp])
            {
                int profit = prices[rp] - prices[lp];

                if (profit > max)
                    max = profit;
            }
            rp++;
        }
        return max;
    }
};