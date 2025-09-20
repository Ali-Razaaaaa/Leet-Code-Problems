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
    vector<double> averageOfLevels(TreeNode* root) {
    vector<double> results;

    queue<TreeNode*> Q;
    long double sum=0;
    int size;
        if(root==nullptr)
        {
            return results;
        }

        Q.push(root);
        while(!Q.empty())
        {
            size=Q.size();
        
        for(int i=0;i<size;i++)
        {
            TreeNode* node=Q.front();
            Q.pop();
            sum+=node->val;
            if(node->left!=nullptr)
            {
                Q.push(node->left);
            }

            if(node->right!=nullptr)
            {
                Q.push(node->right);
            }
        }
        double average=sum/size;
            results.push_back(average);
            sum=0;
            

        }
        return results;
    }
};