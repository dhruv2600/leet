class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      queue <TreeNode*> q;
      q.push(root);
      q.push(NULL);
      vector<int> curr;
      while(!q.empty())
      {
        auto it=q.pop();
        if(it==NULL)
        {
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
