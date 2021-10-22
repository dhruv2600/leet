class Solution {
public:
    vector<vector<int>> visited;
    vector<vector<int>> dp;




    int max=INT_MAX;
    int findpaths(int x,int y,vector<vector<int>>& grid,int n)
    {

    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
      queue<pair<int,int>> q;
      q.push({0,0});
      q.push({-1,-1});
      int level=0;
      while(!q.empty())
      {

        pair<int,int> t=q.front();
        q.pop();
        if(t.first==-99 && t.second==-99)
        {
          level++;
          q.push({-99,-99});
        }
        else
        {
          if(t.first>=0 && t.second>=0 && t.first<grid.size() && t.second<grid.size() && !grid[t.first][t.second])
          {
            for(int i=-1;i<2;i++)
            {
              for(int j=-1;j<2;j++)
              {
                if(i !=0 || j!=0)
                  q.push({t.first+i,t.second+j});
              }
            }
          }
        }

      }

    }
};
