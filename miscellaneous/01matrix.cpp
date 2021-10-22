class Solution {
public:
    vector<vector<int>> dp;
    queue<pair<int>> q;
    void bfs(int i,int j,vector<vector<int>>& mat)
    {
      if(dp[i][j]!=-1)
        return dp[i][j];
      q.push(make_pair(i,j));
      while(!q.empty())
      {
        auto t=q.front();
        q.pop();
        if(dp[t.first][t.second]==-1)
        {
          q.push(make_pair(t.first,t.second));
        }
      }
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      int rows=mat.size();
      int cols=mat[0].size();
      dp.resize(rows);
      for(int i=0;i<rows;i++)
      {
        dp[i].resize(cols,-1);
      }
      for(int i=0;i<rows;i++)
      {
        for(int j=0;j<cols;j++)
        {
          if(mat[i][j]==0)
            dp[i][j]=0;
        }
      }
      for(int i=0;i<rows;i++)
      {
        for(int j=0;j<cols;j++)
        {
          if(dp[i][j]==-1)
          {

          }
        }
      }
      return dp;
    }
};
