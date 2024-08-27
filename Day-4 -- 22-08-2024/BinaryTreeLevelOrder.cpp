class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> sol;

        if (root == NULL)
         return  sol;

        queue<TreeNode*> queue;
        queue.push(root);

        while (!queue.empty()) {
            int k = queue.size();
            vector<int> height;

            for (int i = 0; i<k; ++i) 
            {
                TreeNode* node = queue.front();
                queue.pop();
                height.push_back(node->val);

                if (node->left != NULL)
                 queue.push(node->left);
                if (node->right != NULL) 
                queue.push(node->right);
            }
            sol.push_back(height);
        }

        return sol;
        
    }
};