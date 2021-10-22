class Solution{
    public:
    int x=INT_MIN;
    
        int isBst(Node *root,Node * &prev)
    {
        if(!root)
            return 0;
        int a=isBst(root->left,prev);
        if(prev && root->data<=prev->data)
            return -1;
        prev=root;
        
        int b=isBst(root->right,prev);
        if(a==-1 || b==-1)
            return -1;
        return a+b+1;
    }
    int largestBst(Node *root)
    {
    	if(!root)
    	    return 0;
    	 Node *prev=NULL;
        int x=isBst(root,prev);
        if(x>=0)
            return x;
        else
        {   prev=NULL;
            int a=largestBst(root->left);
            prev=NULL;
            int b=largestBst(root->right);
            return max(a,b);
        }
    }
};