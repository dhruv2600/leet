class Solution {
public:
    vector<vector<bool>> visited;
    int dfs(vector<vector<int>>& grid,int i,int j)
    {
        int rows=grid.size();
        int cols=grid[0].size();
        if(i>=rows || j>=cols || i<0 || j<0)
            return 0;
        visited[i][j]=1;
        int d=0;
        int r=0;
        int l=0;
        int u=0;
        if(i+1<rows && !visited[i+1][j] && grid[i+1][j])
        {
          int d=dfs(grid,i+1,j);
        }
        if(i-1>=0 && !visited[i-1][j] && grid[i-1][j])
        {
          int u=dfs(grid,i-1,j);
        }
        if(j-1>=0 && !visited[i][j-1] && grid[i][j-1])
        {
          int l=dfs(grid,i,j-1);
        }
        if(j+1< cols && !visited[i][j+1] && grid[i][j+1])
        {
          int r=dfs(grid,i,j+1);
        }
        return 1+l+r+d+u;
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
      int rows=grid.size();
      int cols=grid[0].size();
      int maxx=INT_MIN;
      visited.resize(rows);
      for(int i=0;i<rows;i++)
        visited[i].assign(cols,0);
      for(int i=0;i<rows;i++)
      {
        for(int j=0;j<cols;j++)
        {
          if(grid[i][j] && !visited[i][j])
          {
            maxx=max(maxx,dfs(grid,i,j));
          }
        }
      }
    }
};
