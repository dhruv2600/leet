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
    vector<vector<int>> result;

    void pathsumrecur(TreeNode* root,int targetsum,vector<int> curr)
    {
        if(root==NULL )
            return;
        curr.push_back(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            if(root->val==targetsum)
            {
                result.push_back(curr);
            }
            return;
        }
        pathsumrecur(root->left,targetsum-root->val,curr);
        pathsumrecur(root->right,targetsum-root->val,curr);
        return;

    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> curr;
        if(root==NULL)
            return result;
        pathsumrecur(root,targetSum,curr);
        return result;

    }
};
