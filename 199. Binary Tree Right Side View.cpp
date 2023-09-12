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
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> ans;

        if(!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp;

            for(int i = 0; i<size; i++)
            {
                TreeNode* k = q.front();
                q.pop();

                temp.push_back(k->val);

                if(k->left)
                    q.push(k->left);
                
                if(k->right)
                    q.push(k->right);
            }
            ans.push_back(temp.back());
        }
        return ans;
    }
};