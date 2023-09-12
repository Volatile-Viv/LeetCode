/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void preOrder(TreeNode *root, queue<int> &ans)
    {
        if (!root)
            return;

        ans.push(root->val);

        preOrder(root->left, ans);
        preOrder(root->right, ans);
    }

    void flatten(TreeNode *root)
    {
        if (!root)
            return;

        queue<int> q;
        preOrder(root, q);
        q.pop();

        while (!q.empty())
        {
            int val = q.front();
            q.pop();

            root->right = new TreeNode(val);
            root->left = NULL;

            root = root->right;
        }
    }
};