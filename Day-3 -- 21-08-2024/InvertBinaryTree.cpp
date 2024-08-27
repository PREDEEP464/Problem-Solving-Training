class Solution {
    void swap(TreeNode *curr)
    {
        if(!curr)
            return;
        
        swap(curr->right);
        swap(curr->left);

        TreeNode *temp;
        temp = curr -> left;
        curr -> left = curr ->right;
        curr->right = temp;

    }

    public:
    TreeNode* invertTree(TreeNode* root) 
    {
        swap(root);
        return root;       
        
    }
};