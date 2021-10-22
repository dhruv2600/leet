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
    int maxLevelSum(TreeNode* root) {
        queue<int>buffer;
        queue<TreeNode *>q;
       
        q.push(root);
        q.push(NULL);
        int level=1;
        int maxx=INT_MIN;
        int ans=0;
        while(!q.empty())
        {
            if(q.front()==NULL)
            {
                q.pop();
                q.push(NULL);
               
                
                int loc=0;
                while(!buffer.empty())
                {
                    loc+=buffer.front();
                    buffer.pop();
                }
                if(loc>maxx)
                {
                    //cout<<loc<<level<<endl;
                    maxx=loc;
                    ans=level;
                }
                level++;
                
                 if(q.front()==NULL)
                    break;

            }
            else
            {
                TreeNode *curr=q.front();
                q.pop();
                buffer.push(curr->val);
                cout<<curr->val;
                if(curr->right)
                {
                   // cout<<curr->right->val;
                    q.push(curr->right);
                }
                if(curr->left)
                {
                   // cout<<curr->left->val;
                    q.push(curr->left);
                }
            }
        }
        return ans;
    }
};