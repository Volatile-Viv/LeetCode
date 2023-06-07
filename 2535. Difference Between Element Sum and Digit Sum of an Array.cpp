class Solution {
public:
    int digitsSum(int n)
    {
        int sum = 0, rem;

        while(n > 0)
        {
            rem = n % 10;
            sum += rem;
            n /= 10;
        }
        return sum;
    }
    
    int differenceOfSum(vector<int>& nums) 
    {
        int ns = 0, ds = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            ns += nums[i];
            ds += digitsSum(nums[i]);
        }
        return abs(ns - ds);

    }
};