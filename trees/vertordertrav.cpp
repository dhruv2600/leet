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
    vector<vector<int>> verticalTraversal(TreeNode* root) {


        map<int,vector<int>>ht;
        if(!root)
            return {};
        vector<vector<int>>res;
        queue<pair<TreeNode*,int>>dq;
        dq.push(make_pair(root,0));
        while(!q.empty())
        {
            TreeNode*t=q.front().first;
            int d=q.front().second;
            q.pop();
            ht[d].push_back(t->val);
             if(t->left)
                q.push(make_pair(t->left,d-1));
            if(t->right)
                q.push(make_pair(t->right,d+1));
        }
        for(auto it:ht)
        {
            vector<int>curr={};
            for(auto it2:it.second)
            {
                curr.push_back(it2);
            }
            res.push_back(curr);
        }
        return res;
    }
};