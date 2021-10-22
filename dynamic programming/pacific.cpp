class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>>dp(heights.size(),vector<int>(heights[0].size()));
        int row=heights.size();
        int cols=heights[0].size();

        for(int i=0;i<rows;i++)
        {
            dp[i][0]=1; //pacific
            dp[i][cols-1]=-1; //atlantic
        }
        for(int j=0;j<cols;j++)
        {
            dp[0][j]=1; // pacific
            dp[rows-1][j]=100; //atlantic
        }
        for(int i=1;i<rows;i++)
        {
            for(int j=1;j<cols;j++)
            {
                if(heights[i][j]>=heights[i+1][j] && dp[i+1][j]==100)
                  dp[i][j]=100;
                if(heights[i][j]>=heights[i-1][j] && dp[i-1][j]==100)
                  dp[i][j]=100;

                if(heights[i][j]>=heights[i][j+1] && dp[i+1][j]==100)
                  dp[i][j]=100;

                if(heights[i][j]>=heights[i][j-1] && dp[i+1][j]==100)
                  dp[i][j]=100;
            }
        }
    }
};
