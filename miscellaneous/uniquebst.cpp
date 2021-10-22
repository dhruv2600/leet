class Solution {
public:
    vector<vector<int>>dp;
    int helper(int start,int end)
    {
      if(start==end)
        return dp[start][end]=1;
      if(start>end || start==0 || end==0)
        return 0;
      if(dp[start][end]!=-1)
        return dp[start][end];
      int ut=0;
      for(int i=start; i<=end; i++)
      {
        ut+=max(helper(start,i-1),helper(i+1,end));
      }
      return dp[start][end]=ut;

    }
    int numTrees(int n) {
      dp.resize(n+1);
      for(int i=0; i<=n; i++)
        dp[i].resize(n+1,-1);
      helper(1,n);
      for(auto it:dp)
      {

          for(auto i:it)
          {
              cout<<i;
              cout<<" ";

          }
          cout<<'\n';
      }
     cout<<dp.size();
      return dp[1][n];
    }
};
