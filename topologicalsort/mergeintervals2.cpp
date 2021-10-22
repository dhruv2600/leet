
#include "vector"

class Solution {
public:
  vector<vector<bool>> g;
  vector<int> visited;
  vector<int> res;
  void dfs(int v, int n) {

    int flag = 0;
    for (int i = 0; i < n; i++) {
      if (g[i][v] == 1 && !visited[i]) {
        flag = 1;
        break;
      }
    }
    if (flag == 1)
      return;
    visited[v] = 1;
    res.push_back(v);
    for (int i = 0; i < n; i++) {
      if (g[v][i] == 1 && !visited[i])
        dfs(i, n);
    }
  }
  vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites) {
    g.resize(numCourses);
    visited.resize(numCourses, 0);
    for (int i = 0; i < numCourses; i++)
      g[i].resize(numCourses, 0);
    for (auto it : prerequisites) {
      g[it[1]][it[0]] = 1;
    }
    for (int i = 0; i < numCourses; i++) {
      if (visited[i] == -1)
        dfs(i, numCourses);
    }
    if (res.size() == numCourses)
      return res;
    return {};
  }
};