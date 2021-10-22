class Solution {
public:
    unordered_map<int,int> ht;

    vector<unordered_map<int,int>> dp;

      bool canCrossrecur(int start,int end,int k)
    {
        auto it=ht.find(start);
        auto it2=dp[start].find(k);
        if(it2!=dp.end())
          return dp[start][k];

        if(k==0)
        {
            dp[start].insert({k,canCrossrecur(start+1,end,1);})
            return dp[start][k];
        }
        else if(k<0 || start>end)
            return 0;
      else if(dp[start][k]!=-1)
        return dp[start][k];
      else if(it==ht.end())
        return dp[start][k]=0;
      else if(start==end)
        return dp[start][k]=1;
      else if(k==0 && start!=end)
        return dp[start][k]=0;

      else
      {
        return dp[start][k]= canCrossrecur(start+k-1,end,k-1) || canCrossrecur(start+k,end,k) ||                canCrossrecur(start+k+1,end,k+1);
      }
    }

    bool canCross(vector<int>& stones) {
       int start=0;
        //curr.resize(stones[stones.size()-1]+1);
        long end=stones[stones.size()-1];

        dp.resize(end+1);

        for(int i=0;i<stones.size();i++)
            ht.insert({stones[i],i});
        return canCrossrecur(start,end,0);


    }
};
