class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        vector<int> ans;

        while (left <= right && top <= bottom) 
        {
            for(int i = left; i <= right; i++)
            {
                int val = matrix[top][i];
                ans.push_back(val);
            }
            top++;

            for(int i = top; i <= bottom; i++)
            {
                int val = matrix[i][right];
                ans.push_back(val);
            }
            right--;

            if (top <= bottom) {
                for(int i = right; i >= left; i--)
                {
                    int val = matrix[bottom][i];
                    ans.push_back(val);
                }
                bottom--;
            }

            if (left <= right) 
            {
                for(int i = bottom; i >= top; i--)
                {
                    int val = matrix[i][left];
                    ans.push_back(val);
                }
                left++;
            }

        }
        return ans;
    }
};