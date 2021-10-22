class Solution {
public:
    vector<vector<int>> dp;
    int min(int a,int b)
    {
        if(a<b)
            return a;
        return b;
    }
    int longestCommonSubsequence(string word1, string word2) {
        int rows=word1.length()+1;
        int cols=word2.length()+1;
        dp.resize(rows,-1);
        for(int i=0;i<rows;i++)
        {
            dp[i].resize(cols,-1);
        }
        for(int i=0;i<rows;i++)
        {
            dp[i][0]=0;
        }
        for(int j=0;j<cols;j++)
        {
            dp[0][j]=0;
        }
        for(int i=1;i<rows;i++)
        {
            for(int j=1;j<cols;j++)
            {
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[rows-1][cols-1];
    }
};
