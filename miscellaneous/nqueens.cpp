class Solution {
public:
    vector<vector<string>> res;
    vector<string> initial;
    vector<vector<int>> danger;
    void solve(int start,int n,int size)
    {
      if(n==1)
      {
        for(int i=0;i<size;i++)
        {

        }
      }
      else
      {
        for(int i=0;i<n;i++)
        {
          if(!danger[start][i])
          {
            initial[start][i]='Q';
            solve
          }
        }
      }



      for(int i=start;i<n;i++)
      {

      }
    }
    vector<vector<string>> solveNQueens(int n) {
      danger.resize(n);
      for(int i=0;i<n;i++)
        danger.assign(n,0);
      start.resize(n);
      for(int i=0;i<n;i++)
      {
        string curr="";
        for(int j=0;j<n;j++)
        {
          curr=curr+'.';
        }
        start[i].push_back(curr);
      }
      findqueensrecur(0,n,n);
      return res;
    }
};
