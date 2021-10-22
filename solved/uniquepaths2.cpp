class Solution {
public:
    vector<vector<int>> dp;
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows=obstacleGrid.size();
        int cols=obstacleGrid[0].size();
        dp.resize(rows);
        for(int i=0;i<rows;i++)
        {
            dp[i].resize(cols);
        }
        bool block=0;
        for(int i=0;i<rows;i++)
        {
            if(obstacleGrid[i][0]==0 && block!=1)
                dp[i][0]=1;
            else
            {
                block=1;
                dp[i][0]=0;
            }
        }
        block=0;
        for(int j=0;j<cols;j++)
        {
            if(obstacleGrid[0][j]==0 && block!=1)
                dp[0][j]=1;
            else
            {
                block=1;
                dp[0][j]=0;
            }
        }
        for(int i=1;i<rows;i++)
        {
            for(int j=1;j<cols;j++)
            {
                if(obstacleGrid[i][j]==1)
                    dp[i][j]=0;
                else
                    dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[rows-1][cols-1];

    }
};
