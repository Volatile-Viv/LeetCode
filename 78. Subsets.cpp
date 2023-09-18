class Solution {
public:
    void solve(vector<int> nums, vector<vector<int>> &ans, vector<int> subset, int i)
    {
        //base case
        if(i >= nums.size())
        {
            ans.push_back(subset);
            return;
        }

        //exclude
        solve(nums, ans, subset, i + 1);

        //include
        subset.push_back(nums[i]);
        solve(nums, ans, subset, i + 1);        

    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> subset;
        int index = 0;

        solve(nums, ans, subset, index);
        return ans;
    }
};