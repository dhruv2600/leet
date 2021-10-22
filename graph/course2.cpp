class Solution {
public:
    vector<int> visited;
    vector<int> visiting;
    stack<int> stk;
    bool cycle;
    void cyclicDFS(int i,int V,vector<vector<int>> adj)
    {

      if(cycle)
        return;

      visiting[i] =1;
      visited[i]=1;
      for(auto it:adj[i])
      {
        if(visiting[it])
        {
            cycle=1;
            return;
        }
        if(!visited[it])
            cyclicDFS(it,V,adj);
      }
      visiting[i]=0;
      stk.push(i);

    }

    vector<int> findOrder(int n, vector<vector<int>>& prerequisites)
    {
       vector<vector<int> > adj;
       cycle=0;
      adj.resize(n);
      for(auto it :prerequisites)
      {
        adj[it[1]].push_back(it[0]);
      }
      visited.resize(n,0);
      visiting.resize(n,0);
      bool cycle=0;
      for(int i=0;i<n;i++)
      {
        if(!visited[i])
        {
            cyclicDFS(i,n,adj);
        }
          if(cycle)
              return {};

      }
        vector<int> res;
      while(!stk.empty())
      {
        res.push_back(stk.top());
        stk.pop();
      }
        cout<<cycle;
      if(cycle)
        return {};
      return res;
    }
};
