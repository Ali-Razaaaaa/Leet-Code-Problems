class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        std::queue<TreeNode*> q;
        q.push(root);
        int depth = 0;

        while (!q.empty()) {
            int levelSize = q.size(); 
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* current = q.front();
                q.pop();
                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }
            depth++; 
        }

        return depth;
    }
};
