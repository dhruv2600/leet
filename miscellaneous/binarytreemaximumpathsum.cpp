class Solution {
public:

    int maxx(int a,int b,int c)
    {
        if(a>b)
        {
            if(a>c)
                return a;
            return c;
        }
        else if(b>a)
        {
            if(b>c)
                return b;
            return c;
        }
        else
        {
            if(b>c)
                return b;
            return c;
        }
    }
    pair<int,int> maximumpathsum(TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
            return make_pair(root->val,1);
        else if(root->left==NULL && root->right!=NULL)
        {
            pair <int,int> p1=maximumpathsum(root->right);
            if(p1.second==1)
            {
                int a=maxx(root->val,p1.first,root->val+p1.first);
                if(a==root->val ||a==root->val+p1.first)  //INCLUDING ROOT NECESSARY
                        return make_pair(a,1);
                return make_pair(a,0);
            }
            else
            {
              int a=max(root->val,p1.first);
              if(a==root->val)
                return make_pair(a,1);
              return make_pair(a,0);
            }
        }
        else if(root->right==NULL && root->left!=NULL)
        {
          pair <int,int> p1=maximumpathsum(root->left);
          if(p1.second==1)
          {
              int a=maxx(root->val,p1.first,root->val+p1.first);
              if(a==root->val ||a==root->val+p1.first)  //INCLUDING ROOT NECESSARY
                      return make_pair(a,1);
              return make_pair(a,0);
          }
          else
          {
            int a=max(root->val,p1.first);
            if(a==root->val)
              return make_pair(a,1);
            return make_pair(a,0);
          }
        }
        else
        {
          pair<int,int>  p1=maximumpathsum(root->left);
          pair<int,int>  p2=maximumpathsum(root->right);
          if(p1.second==0 && p2.second==0)
          {
            int a=maxx(root->val,p1.first,p2.first);
            if(a==root->val)
              return make_pair(a,1);
            else
              return make_pair(a,0);
          }
          else if(p1.second==1 && p2.second==1)
          {
            int a= maxx(root->val+p1.first+p2.first,p1.first,p2.first);
              a=max(a,root->val+p1.first);
              a=max(a,root->val+p2.first);
              a=max(a,root->val);
              if(a==root->val+p1.first+p2.first||a==root->val+p1.first||a==root->val+p2.first||a==root->val)
                return make_pair(a,1);
              else
                return make_pair(a,0);
          }
          else if(p1.second==1 && p2.second==0)
          {
            int a=maxx(root->val+p1.first,p1.first,p2.first);
            a=max(a,root->val);
            if(a==root->val||a==root->val+p1.first)
              return make_pair(a,1);
            else
              return make_pair(a,0);
          }
          else
          {
            int a=maxx(root->val+p2.first,p1.first,p2.first);
            a=max(a,root->val);
            if(a==root->val||a==root->val+p2.first)
              return make_pair(a,1);
            else
              return make_pair(a,0);
          }
        }

    }
    int maxPathSum(TreeNode* root) {
        return maximumpathsum(root).first;
    }
};
