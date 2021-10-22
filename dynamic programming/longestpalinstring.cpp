class Solution {
public:
    vector<vector<bool>> dp;
    int longestPalindromeSubseq(string s) {
        dp.resize(s.size());
        for(int i=0;i<s.length();i++)
            dp[i].resize(s.length(),0);
        for(int i=0;i<s.length();i++)
        {
          dp[i][0]=0;
          dp[0][i]=0;
          dp[i][i]=1;
        }
        for(int i=0;i<s.length();i++)
        {
          for(int j=i;j<s.length();j++)
          {

          }
        }

    }

};
