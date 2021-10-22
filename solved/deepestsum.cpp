/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode*node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);

        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}
int deepestrecursum(struct TreeNode*root,int depth)
{
    if(root==NULL)
        return 0;
     else if(depth==1 && root!=NULL)
     {
         return root->val;
     }
    else
    {
        depth--;
        return deepestrecursum(root->right,depth)+ deepestrecursum(root->left,depth);

    }
}

int deepestLeavesSum(struct TreeNode* root){
    int depth=maxDepth(root);
    printf("%d",depth);
    return deepestrecursum(root,depth);
}
