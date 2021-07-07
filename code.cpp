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
    int c;
    Solution()
    {
        c=0;
    }
    void good(TreeNode* root,int val)
    {
        if(root!=NULL)
        {
            if(root->val>=val)
            {
                c++;
                val=root->val;
            }
            good(root->left,val);
            good(root->right,val);
        }
    }
    int goodNodes(TreeNode* root) {
        good(root,root->val);
        return c;
    }
};
