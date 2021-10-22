class Solution {
public:
    vector<vector<int>> dp;


    int cityrecur(vector<vector<int>> costs,int start,int end,int acap,int bcap)
    {
      if(start>end)
      {
        return 0;
      }
      if(acap==0 && bcap==0)
        return 0;
      if(dp[acap][bcap]!=-1)
        return dp[acap][bcap];
      if(acap!=0 && bcap==0)
        return dp[acap][bcap]=costs[start][0]+cityrecur(costs,start+1,end,acap-1,bcap);
      else if(acap==0 && bcap !=0)
        return dp[acap][bcap]=costs[start][1]+cityrecur(costs,start+1,end,acap,bcap-1);
      else
      {
        return dp[acap][bcap]=min(costs[start][0]+cityrecur(costs,start+1,end,acap-1,bcap),costs[start][1]+cityrecur(costs,start+1,end,acap,bcap-1));
      }

    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
      int n=costs.size();
      int start=0;
      int end=n-1;
      int acap=n/2;
      int bcap=n/2;
      dp.resize(acap);
      for(auto it:dp)
        it.resize(bcap,-1);

      return cityrecur(costs,start,end,acap,bcap);
    }
};
