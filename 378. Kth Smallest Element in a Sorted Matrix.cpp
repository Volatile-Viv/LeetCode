class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        int n = matrix.size();
        vector<int> ans;
            
        for(int i = 0; i<n*n; i++)
        {
            int row = i/n;
            int col = i%n;

            ans.push_back(matrix[row][col]);
        }

        sort(ans.begin(), ans.end());

        return ans[k-1];
    }
};