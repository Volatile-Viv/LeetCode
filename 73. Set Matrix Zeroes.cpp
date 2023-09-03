class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<bool> zeroRows(m, false); 
        vector<bool> zeroColumns(n, false);

        for(int i = 0; i < m ; i++)
        {
            for(int j = 0; j < n ; j++)
            {
                if(matrix[i][j] == 0)
                {
                    zeroRows[i] = true;
                    zeroColumns[j] = true;
                }
            }
        }  

        //rows
        for(int i = 0; i < m ; i++)
        {
            if(zeroRows[i])
            {
                for(int j = 0; j < n ; j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        //columns
        for(int j = 0; j < n ; j++)
        {
            if(zeroColumns[j])
            {
                for(int i = 0; i < m ; i++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};