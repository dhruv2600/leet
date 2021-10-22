class Solution {
public:
    vector<int> visited;
      void dfs(vector<vector<int>>& rooms,int i)
  {
        int v=rooms.size();
        if(i>=v || i<0)
          return;
        visited[i]=1;
        for(int k:rooms[i])
        {
            if(!visited[k])
              dfs(rooms,k);
        }
  }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int vertices=rooms.size();
        visited.resize(vertices,0);
        int componenets=0;
        for( vector<int> i:rooms)
        {
          for(int j:i)
          {
            if(!visited[j])
            {
              dfs(rooms,j);
              componenets++;
            }
          }
        }
        for(int i: visited)
          cout<<i;
        cout<<componenets;
        if(componenets==1 || componenets==0)
          return true;
        return false;
    }
};
