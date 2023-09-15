class Solution
{
public:
    void traverse(TreeNode *root, vector<int> &v)
    {
        if (!root)
            return;

        traverse(root->left, v);
        v.push_back(root->val);
        traverse(root->right, v);
    }

    bool isValidBST(TreeNode *root)
    {
        vector<int> v;
        traverse(root, v);

        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] >= v[i + 1])
                return false;
        }
        return true;
    }
};