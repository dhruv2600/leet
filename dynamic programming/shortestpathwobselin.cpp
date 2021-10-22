class Solution {
public:

    int shortestPath(vector<vector<int>>& grid, int k) {
        queue<vector<int>>q;
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<int>>v(grid.size(),vector<int>(cols,-1));
        q.push({0,0,0,k});
        while(!q.empty())
        {
            vector<int>t=q.front();
            q.pop();
            int x=t[0];
            int y=t[1];
            int obs=t[3];
            if(x>=rows||y>=cols||x<0||y<0||obs<0)
                continue;

            if(x==rows-1 && y==cols-1)
                return t[2];


            if(grid[x][y]==1)
            {
                if(obs>0)
                    obs--;
                else
                    continue;
            }

            if(v[x][y]!=-1 && v[x][y]>=obs)
                continue;
            cout<<"YO";
            v[x][y]=obs;

            q.push({x,y+1,++t[2],obs});
            q.push({x+1,y,++t[2],obs});
            q.push({x-1,y,++t[2],obs});
            q.push({x,y-1,++t[2],obs});
        }
        return -1;
    }
};