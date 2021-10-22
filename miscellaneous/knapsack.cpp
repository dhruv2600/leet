class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    vector<vector<int>> dp;

    int knap(int start,int end,int W,int wt[],int val[])
    {
      if(start>end)
        return 0;
      if(wt[start]<W)
      {
        return max(val[start]+knap(start+1,end,W-wt[start],wt,val),knap(start+1,end,W,wt,val));
      }
      else
        return knap(start+1,end,W,wt,val)
    }
    int knapSack(int W, int wt[], int val[], int n)
    {
        dp.resize(n+1);
        for(int i=0;i<n;i++)
          dp[i].resize(W+1);
        for(int i=0;i<n;i++)
          dp[i][0]=0;
        for(int j=0;j<W;j++)
          d[0][j]=0;
        for(int i=1;i<=n;i++)
        {
          for(int j=1;j<=W;j++)
          {
            if(j>val[i-1])
            {
              return dp[i-1][j];
            }
            else
            {
              return max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]])
            }
          }
        }
        return dp[n][W];
    }
};
