int max(struct TreeNode *root)
{
    while(root->right!=NULL)
        root=root->right;
    return root->val;
}
int min(struct TreeNode *root)
{
    while(root->left!=NULL)
        root=root->left;
    return root->val;
}
bool isLeafNode(struct TreeNode *root)
{
    if(root==NULL)
        return false;
    else if(root->left==NULL && root->right==NULL)
        return true;
    else
        return false;
}
bool isValidBST(struct TreeNode* root){
    if(root==NULL)
        return false;
    else if(isLeafNode(root))
        return true;
    else if(root->right==NULL)
    {
        if(root->val>max(root->left))
            return isValidBST(root->left);
        return false;
    }
    else if(root->left==NULL)
    {
        if(root->val<min(root->right))
           return isValidBST(root->right);
        return false;
    }
    else
    {
        if(root->val<min(root->right) && root->val>max(root->left))
        {
            return isValidBST(root->right) &&  isValidBST(root->left);
        }
        return false;
    }
}
