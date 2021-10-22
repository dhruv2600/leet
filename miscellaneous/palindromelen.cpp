class Solution {
public:
    vector<vector<bool>> dp;
    int longestPalindromeSubseq(string s) {
        dp.resize(s.length());
        for (int i = 0; i < s.length();i++) {
          dp[i].resize(s.length());
        }
        dp[s.length()-1][s.length()-1]=1;
        for(int j = 0; j < s.length()-1;j++)
          dp[s.length()-1][j]=0;
        dp[0][0]=1;
        for(int i = 1; i < s.length();i++)
          dp[i][0]=0;
        int maxlen=INT_MIN;
        cout<<"HI";
        for (int i = s.length()-2; i >=0;i--) {
          for (int j = 1; j <s.length();j++) {
            if(i>j)
              dp[i][j] =0;
            if(i==j)
              dp[i][j] =1;
            else if(i-j==1 && s[i]==s[j])
              dp[i][j] =1;
            else if(s[i]==s[j])
              dp[i][j] =dp[i+1][j-1];
            else if(s[i]!=s[j])
              dp[i][j] =0;

            if(dp[i][j]==1)
            {
              if(i-j>maxlen)
                maxlen = i-j;
            }
          }
        }
        return maxlen;
    }

};
