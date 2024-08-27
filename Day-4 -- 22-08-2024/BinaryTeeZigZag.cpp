class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>>v1;
       
        if(root==NULL){
            return v1;
        }
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;

        s1.push(root);
        while(!s1.empty() || !s2.empty())
        {
            vector<int>v2;

            while(!s1.empty())
            {
                TreeNode* temp=s1.top();
                s1.pop();
                v2.push_back(temp->val);

                if(temp->left!=0)
                    s2.push(temp->left);
                
                if(temp->right!=0)
                    s2.push(temp->right);                
            }

            if (!v2.empty()) {
                v1.push_back(v2);
            }
            v2.clear();

            while(!s2.empty())
             {
                TreeNode* temp=s2.top();
                s2.pop();
                v2.push_back(temp->val);
                if(temp->right!=0)
                    s1.push(temp->right);

                if(temp->left!=0)
                    s1.push(temp->left);
                
            }

             if (!v2.empty()) 
                v1.push_back(v2);
            v2.clear();
        }
        return v1;
        
        
    }
};