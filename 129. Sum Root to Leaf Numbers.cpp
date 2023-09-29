class Solution {
public:
    void solve(TreeNode* root, int num, int& sum) 
    {
        if (!root) return;

        num = num * 10 + root->val;

        if (!root->left && !root->right) 
        {
            sum += num;
            return;
        }

        solve(root->left, num, sum);
        solve(root->right, num, sum);
    }
    
    int sumNumbers(TreeNode* root) 
    {
        int sum = 0;
        solve(root, 0, sum);
        return sum;
    }
};
