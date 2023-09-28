class Solution {
public:
    void convertTree(TreeNode* &root, int &sum) 
    {
        if (!root) return;

        convertTree(root->left, sum);

        int temp = root->val;
        root->val = sum;
        sum -= temp;
        
        convertTree(root->right, sum);
    }

    int getSum(TreeNode* root) 
    {
        if (!root) return 0;

        return getSum(root->left) + root->val + getSum(root->right);
    }


    TreeNode* bstToGst(TreeNode* root) 
    {
        int sum = getSum(root);

        convertTree(root, sum);
        return root;
    }
};