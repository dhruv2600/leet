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
    vector<int> res;

    void helper(TreeNode *root,int height)
    {
      if(root == nullptr)
        return;
      if(res[height]==-1)
        res[height] = root->val;
      helper(root->right,height+1);
      helper(root->left,height+1);
      return;
    }
    int height(TreeNode *root)
    {
      if(root == nullptr)
        return 0;
      int l=height(root->left);
      int r=height(root->right);
      return 1+max(l,r);
    }
    vector<int> rightSideView(TreeNode* root) {
        int h=height(root);
        res.resize(h,-1);
        helper(root,0);
        return res;
    }
};
