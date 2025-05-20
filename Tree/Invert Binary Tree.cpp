class Solution {
public:
    TreeNode* invertTree(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        else
        {
            TreeNode* extra=root->left;
            root->left=root->right;
            root->right=extra;
        }
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
