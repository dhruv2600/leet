class Solution {
public:
    vector<vector<int>> dir={{1,0},{-1,0},{0,-1},{0,1}};
    vector<vector<bool>> visited;
    void dfs(int i,int j,vector<vector<char>> grid)
    {
      visited[i][j]=1;
      for(auto it:dir)
      {
        int a=it[0]+i;
        int b=it[1]+j;
        if(a>=0 && b>=0 && a<grid.size() && b<grid[0].size)
        {
        if(!visited[a][b])
          dfs(it[0]+i,it[1]+j,grid);
        }
      }
    }

    int numIslands(vector<vector<char>>& grid) {

      visited.resize(grid.size());
      for(int i=0;i<grid.size();i++)
        visited[i].resize(grid[0].size(),0);
      int components=0;
      for(int i=0;i<grid.size();i++)
      {
        for(int j=0;j<grid[0].size();j++)
        {
          if(!visited[i][j])
          {
            dfs(i,j,grid);
            components++;

          }
        }
      }
      return components;



    }
};
