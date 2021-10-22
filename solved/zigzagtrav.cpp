
class Solution {
public:
    vector<vector<int>> res;
    int height(TreeNode *root)
    {
      if(root==NULL)
        return 0;
      else
      {
        int l=height(root->left);
        int r=height(root->right);
        return 1+max(l,r);
      }
    }
    void levelrecur(TreeNode* root,int l,int rev)
    {
        if(root==NULL)
            return;
        res[l].push_back(root->val);
        if(rev==0)
        {
            levelrecur(root->right,l+1,1);
            levelrecur(root->left,l+1,1);

        }
        else if(rev==1)
        {
            levelrecur(root->left,l+1,0);
            levelrecur(root->right,l+1,0);

        }
        return;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int h=height(root);
        res.resize(h);
        levelrecur(root,0,0);
        return res;
    }
};
