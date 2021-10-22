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
    unordered_map<TreeNode *,int> ht;
    int rob(TreeNode* root) {
        if(root==NULL)
          return 0;
        auto it=ht.find(root);
        if(it!=ht.end())
          return it->second;
        else if(root->left==NULL && root->right==NULL)
        {
          ht.insert({root,root->val});
          return ht[root];
        }
        else if(root->left==NULL && root->right!=NULL)
        {
          ht.insert({root,max(root->val+rob(root->right->right)+rob(root->right->left),rob(root->right))});
          return ht[root];
        }
        else if(root->right==NULL && root->left!=NULL)
        {
          ht.insert({root,max(root->val+rob(root->left->right)+rob(root->left->left),rob(root->left))});
          return ht[root];
        }
        else
        {
          ht.insert({root,max(root->val+rob(root->left->left)+rob(root->right->right)+rob(root->left->right)+rob(root->right->left),rob(root->left)+rob(root->right))});
          return ht[root];
        }
    }
};
