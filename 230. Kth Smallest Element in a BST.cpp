class Solution {
public:
int k,ans=0; 
    void helper(TreeNode* root)
    {
        if(root==NULL || k==0) return;

        helper(root->left);

        if(k==1)
        {
            ans=root->val;
            k=0;
            return;
        }
        
        else
        {
            k--;
        }

        helper(root->right);
    }
    int kthSmallest(TreeNode* root, int j) 
    {
        k = j;

        helper(root);

        return ans;
    }
};