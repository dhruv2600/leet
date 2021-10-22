class Solution {
public:
  int recur=0;
  vector<vector<bool>> visited;
  void dfs(int i,int j,vector<vector<char>>& grid,int rows,int cols)
  {

        if(i<0 || i>=rows || j<0 || j>=cols ) //out of bounds
            return;

        if(grid[i][j]=='0')  //only if land do dfs
            return;

        if(visited[i][j]) // already visited
            return;

        visited[i][j]=1; //visted this node

        dfs(i+1,j,grid,rows,cols);

        dfs(i,j+1,grid,rows,cols);

        dfs(i,j-1,grid,rows,cols);

        dfs(i-1,j,grid,rows,cols);

        return;

  }
    int numIslands(vector<vector<char>>& grid) {
      int rows=grid.size();
      int cols=grid[0].size();
      visited.resize(rows);
      for(int i=0;i<rows;i++)
          visited[i].resize(cols,0);
      int components=0;
      for(int i=0;i<rows;i++)
      {
        for(int j=0;j<cols;j++)
        {
          if(grid[i][j]=='1'  && !visited[i][j] )
          {
            dfs(i,j,grid,rows,cols);
            components++;
          }
        }
      }
      return components;
    }
};
