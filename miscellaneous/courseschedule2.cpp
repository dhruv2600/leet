class Solution {
public:
    vector<int> visited;
    vector<int> visiting;
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int completed=0;
        vector<vector<int>> graph;
        graph.resize(numCourses);
        for(int i=0; i<numCourses;i++)
          graph[i].resize(numCourses,0);
        for(auto it:prerequisites)
        {
          graph[it[1]][it[0]]=1;
        }


    }
};
