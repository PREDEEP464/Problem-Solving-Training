void post(struct TreeNode* root, int* n, int* ans)
{
    if(root == NULL) 
        return;

    post(root->left,n,ans);
    post(root->right,n,ans);
    ans[*n] = root->val;
    ++*n;

}


int* postorderTraversal(struct TreeNode* root, int* returnSize)
{

    int* ans = malloc(101*sizeof(int));
    *returnSize = 0;


    post(root,returnSize,ans);
    return ans;
    
}