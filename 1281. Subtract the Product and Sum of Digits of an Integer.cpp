class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int p = 1, s = 0;
        int rem;
        while(n > 0)
        {
            rem = n % 10;
            p *= rem;
            s += rem;
            n /= 10;
        }
        return p - s;
    }
};