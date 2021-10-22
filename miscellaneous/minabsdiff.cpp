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
    TreeNode *leftmost(TreeNode* root)
    {
      if(root==NULL)
          return NULL;
      TreeNode *p=root;
      while(p->left != nullptr)
        p=p->left;
      return p;
    }
    TreeNode *rightmost(TreeNode* root)
    {
      if(root==NULL)
          return NULL;
      TreeNode *p=root;
      while(p->right != nullptr)
        p=p->right;
      return p;
    }
    int getMinimumDifference(TreeNode* root) {
      TreeNode* p=rightmost(root->left);
      TreeNode* q=leftmost(root->right);
      if(p!=NULL && q!=NULL)
        return min(abs(root->val-p->val),abs(root->val-q->val));
      if(p==NULL && q==NULL)
        return -1;
      if(p!=NULL && q==NULL)
        return abs(root->val-p->val);
      return abs(root->val-q->val)
    }
};
