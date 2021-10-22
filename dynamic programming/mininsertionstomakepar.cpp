class Solution {
public:
    int minInsertions(string s) {
        vector<vector<int>>dp(s.length()+1,vector<int>(s.length()+1));
        int len=s.length();

        for(int i=len-1;i>=0;i--)
        {
            for(int j=i;j<len && j>=1;j++)
            {
                if(s[i]==s[j])
                {
                    if(i==j || i==j-1)
                        dp[i][j]=1;
                    else
                        dp[i][j]=dp[i+1][j-1];
                }
                else
                {
                    dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;
                }
            }
        }
        return dp[1][s.length()];

    }
};