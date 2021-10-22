class Solution {
public:

    int kthSmallest(vector<vector<int>>& matrix, int k) {
      priority_queue<int,vector<int>,greater<int>> pq;
      for(auto it = matrix.begin(); it != matrix.end();it++)
      {
        for(auto it2 = it.begin(); it2 != it.end();it2++)
          pq.push(*it2);
      }
      for(int i=0;i<k;i++)
        int temp=pq.top();
        pq.pop();
      return temp;

    }
};
