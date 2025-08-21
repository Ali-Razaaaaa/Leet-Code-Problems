class Solution {
public:
    void helper(TreeNode* root, vector<int>& values) {
        if (root == nullptr) return;
        helper(root->left, values);
        helper(root->right, values);
        values.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> values;
        helper(root, values);
        return values;
    }
};
