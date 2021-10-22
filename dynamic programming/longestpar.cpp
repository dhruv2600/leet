class Solution {
public:
    int longestValidParentheses(string s) {
        int len=s.length();
        int maxlen=INT_MIN;
        vector<vector<int>>dp;
        dp.resize(len);
        for (int i=0; i<len; i++)
          dp[i].resize(len,0);

        for(int i=len-1; i>=0; i--)
        {
            for(int j=i;j<len; j++)
            {
              if(i==j)
                dp[i][j]=0;
              if(s[i]=='(' && s[j]==')')
              {
                if(j==i+1)
                  dp[i][j]=1;
                else
                {
                  int a==dp[i+1][j-1];
                  if(a)
                    dp[i][j]=a;
                  else
                  {
                    for(int k=i;k<j;k++)
                    {
                      if(dp[i][k])
                      {
                        if(dp[k+1][j])
                        {
                          dp[i][j]=1;
                          break;
                        }
                      }
                    }
                  }
                }
                if(dp[i][j]==1)
                {
                  maxlen=max(maxlen,j-i+1);
                }
              }
              else
                dp[i][j]=0;
            }
        }
        return maxlen;


    }
};
