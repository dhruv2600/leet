class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.


    map<int,vector<Node*>>ht;
    void helper(Node*root,int hd)
    {
        if(!root)
            return;
        ht[hd].push_back(root);
        helper(root->left,hd-1);
        helper(root->right,hd+1);
    }
    vector<int> topView(Node *root)
    {
        helper(root,0);
        vector<int>res;
        for(auto it:ht)
        {
            res.push_back(it.second->data);
        }
        return res;
    }

};