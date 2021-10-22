class Solution {
public:
    vector<int> visited;
    vector<int> visiting;
    bool isCyclicdfs(int i,vector<vector<int>>& prerequisites)
    {

      if(visited[i])
        return 0;
      else if(visiting[i])
        return 1;
      visiting[i] = 1;
      for(auto it:prerequisites)
      {
        if(it[0]==i)
        {
          if(isCyclicdfs(it[1],prerequisites))
            return 1;
        }
      }
      visiting[i] =0;
      visited[i]=1;
      return 0;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
      if(prerequisites.size()==0)
          return 1;
      int size=prerequisites.size();
      visited.resize(numCourses,0);
      visiting.resize(numCourses,0);
        int flag=0;
      for(auto it:prerequisites)
      {
        if(!visited[it[0]])
        {

          if(isCyclicdfs(it[0],prerequisites))
            return false;
        }
      }
      return true;
    }
};
