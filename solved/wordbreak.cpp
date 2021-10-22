class Solution {
public:
     unordered_map<string,int> ht;
      vector<int> dp;
    bool wordRecur(string s,int start,int end)
    {
        if(start>end)
            return true;
      if(dp[start]!=-1)
          return dp[start];
      string curr="";
      for(int i=start; i<=end;i++)
      {
        curr.push_back(s[i]);
        auto it=ht.find(curr);
        if(it!=ht.end())
        {
          if(wordRecur(s,i+1,end))
            return dp[start]=1;
        }
      }
      return dp[start]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {

      dp.resize(s.length()+1,-1);
      dp[s.length()]=1;
      int end=s.length()-1;
      for(int i=0;i<wordDict.size();i++)
      {
        ht.insert({wordDict[i],1});
      }
      for(int i=s.length()-1;i>=0;i--)
      {
        for(j=i;j<)
      }

      return dp[0];
    }
};
