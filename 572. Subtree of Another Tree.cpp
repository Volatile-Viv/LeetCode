class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        if (!root) return false;
        
        if (isIdentical(root, subRoot)) {
            return true;
        }

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

private:
    bool isIdentical(TreeNode* s, TreeNode* t) 
    {
        if (!s && !t) return true;
        
        if (!s || !t) return false;
        
        return (s->val == t->val) && isIdentical(s->left, t->left) && isIdentical(s->right, t->right);
    }
};
