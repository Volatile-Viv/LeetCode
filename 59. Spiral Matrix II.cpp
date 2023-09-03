class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        int val = 1;

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;

        vector<vector<int>> ans(n, vector<int>(n, 0));

        while(left <= right && top <= bottom)
        {
            for(int i = left; i<= right ; i++)
            {
                ans[top][i] = val;
                val++;
            }
            top++;

            for(int i = top; i<= bottom ; i++)
            {
                ans[i][right] = val;
                val++;
            }
            right--;
            
            if(top <= bottom)
            {
                for(int i = right; i>= left ; i--)
                {
                    ans[bottom][i] = val;
                    val++;
                }
                bottom--;
            }

            if(left <= right)
            {
                for(int i = bottom; i>= top ; i--)
                {
                    ans[i][left] = val;
                    val++;
                }
                left++;
            }
        }
        return ans;
    }
};