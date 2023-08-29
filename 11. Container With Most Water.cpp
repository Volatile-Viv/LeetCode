class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int area = 0;

        int lp = 0, rp = height.size() - 1;

        while (lp < rp)
        {
            int minH = min(height[lp], height[rp]);
            int temp = minH * (rp - lp);

            if (temp > area)
                area = temp;
            
            if (height[lp] < height[rp]) 
                lp++;
            else
                rp--;
        }

        return area;
    }
};
