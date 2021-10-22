class Solution {
public:
    vector<vector<int>> dp;
    int uniquePaths(int m, int n) {
        int rows=m;
        int cols=n;
        dp.resize(rows);
        for(int i=0;i<rows;i++)
        {
            dp[i].resize(cols);
        }
        for(int i=0;i<rows;i++)
        {
                dp[i][0]=1;
        }
        for(int j=0;j<cols;j++)
        {
                dp[0][j]=1;
        }
        for(int i=1;i<rows;i++)
        {
            for(int j=1;j<cols;j++)
            {
                    dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[rows-1][cols-1];


    }
};
