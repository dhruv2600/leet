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
    void levelrecur(TreeNode* root,int l)
    {
        if(root==NULL)
            return;
        res[l].push_back(root->val);
        levelrecur(root->left,l+1);
        levelrecur(root->right,l+1);
        return;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
      queue <TreeNode*> q;
      q.push(root);
      q.push(NULL);
      vector<int> curr;
      while(1)
      {
        auto it=q.front();
        q.pop();
        if(it==NULL)
        {
          if(q.empty())
              break;
          res.push_back(curr);
          curr.resize(0);
          q.push(NULL);
        }
        else
        {
          curr.push_back(it->val);
          q.push(it->left);
          q.push(it->right);
        }
      }
        return res;
    }


};
