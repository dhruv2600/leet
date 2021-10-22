class Solution {
public:

    vector<int> visiting;
    vector<int> visited;


    int cycle(int s,vector<vector<int>> graph)
    {
      if(visiting[s])
      {
        return 1;
      }
      visiting[s]=1;
      for(auto it:graph[s])
      {
        if(!visited[it])
        {
          int a=cycle(it,graph);
          if(a==1)
            return 1;
        }
      }
      visiting[s]=0;
      visited[s]=1;
      return 0;
    }


    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

      int vertices=graph.size();
      visiting.resize(vertices,0);
      visiting.resize(vertices,0);
      vector<int>res;
      for(int i=0;i<vertices;i++)
      {
        if(!cycle(i,graph))
        {
          res.push_back(i);
          visited={0};
        }
      }
      return res;


    }
};
