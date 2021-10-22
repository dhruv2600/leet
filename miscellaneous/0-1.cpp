class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      int rows=mat.size();
      int cols=mat[0].size();
      vector<vector<int>> dis(m,vector<int>(n,-1));
      for(int i=0;i<rows;i++)
      {
        for(int j=0;j<cols;j++)
        {
          if(mat[i][j]=0)
            dp[i][j]=0;
        }
      }
      for(int i=0;i<rows;i++)
      {
        for(int j=0;j<cols;j++)
        {
          if(dp[i][j]==-1)
            dp[i][j]=shortest(i,j,mat);
        }
      }

    }
};
