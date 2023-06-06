class Solution {
public:
    int countDigits(int num) 
    {
        int rem,n = num, count = 0;

        while(n > 0)
        {
            rem = n % 10;
            if(num % rem == 0)
                count++;
            n /= 10;
        }    
        return count;
    }
};