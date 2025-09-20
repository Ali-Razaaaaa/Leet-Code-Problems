class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};

        queue<TreeNode*> q;
        q.push(root);

        vector<vector<int>> doublevec;

        while (!q.empty())
		{
            int size = q.size();
            vector<int> singlevec;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                singlevec.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            doublevec.push_back(singlevec);
        }

        return doublevec;
    }
};
