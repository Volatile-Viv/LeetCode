class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int one = 0;
        int zero = 0;
        int two = 0;

        for(int n : nums)
        {
            if(n == 0)
                zero++;
            
            if(n == 1)
                one++;
            
            if(n == 2)
                two++;
        }
        int i = 0;
        
        while(zero > 0)
        {
            nums[i] = 0;
            zero--;
            i++;
        }
        
        while(one > 0)
        {
            nums[i] = 1;
            one--;
            i++;
        }
        
        while(two > 0)
        {
            nums[i] = 2;
            two--;
            i++;
        }
    }
};
