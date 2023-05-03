class Solution
{
public:
    TreeNode *temp(vector<int> &nums, int low, int high)
    {
        if (high <= low)
            return NULL;
        int mid = low + (high - low) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = temp(nums, low, mid);
        root->right = temp(nums, mid + 1, high);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return temp(nums, 0, nums.size());
    }
};