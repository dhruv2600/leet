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
    int i;
    int helper(TreeNode *root,int k)
    {
      if(root->left==NULL)
      {
        if(i==-1)
          i=1;
      }

    }
    int kthSmallest(TreeNode* root, int k) {
        kthSmallest(root->left,k);

        if(k==1)
            return root;


    }
};
