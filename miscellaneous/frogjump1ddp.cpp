class Solution {
public:
    unordered_map<int,int> ht;
    unordered_map<int,int> ht;
    //vector<int>curr;
    //int recurcount=0;
      bool canCrossrecur(int start,int end,int k)
    {
          auto it=ht.find(start);
          if(dp[start]!=-1)
            return dp[start];
        if(start>end )
            return 0;
        else if(k==0)
            return dp[start]=0;

          else if(it==ht.end())
              return dp[start]=0;
          else if(start==end)
              return dp[start]=1;

      else
      {
        return dp[start]= canCrossrecur(start+k-1,end,k-1) || canCrossrecur(start+k,end,k) ||                canCrossrecur(start+k+1,end,k+1);
      }
    }

    bool canCross(vector<int>& stones) {
       int start=0;
        //curr.resize(stones[stones.size()-1]+1);
        int end=stones[stones.size()-1];
        dp.resize(end+1,-1);
        for(int i=0;i<stones.size();i++)
            ht.insert({stones[i],i});
        dp[end]=1;
        bool res= canCrossrecur(start+1,end,1);
        for(int i=0;i<dp.size();i++)
            cout<<dp[i];
        return res;
    }
};
