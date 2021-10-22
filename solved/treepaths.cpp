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
    vector <string> paths;
    void pathsrecur(TreeNode *root,string curr)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            paths.push_back(curr+to_string(root->val));
            return;
        }
        else
        {
            curr+=to_string(root->val)+"->";
            pathsrecur(root->left,curr);
            pathsrecur(root->right,curr);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {

        if(root==NULL)
            return {};
        string currpath="";
        pathsrecur(root,currpath);
        return paths;


    }
};
