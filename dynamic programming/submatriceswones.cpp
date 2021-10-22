class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>>dp(matrix.size()+1,vector<int>(matrix[0].size()+1));


        for(int i=1;i<=matrix.size();i++)
        {
            for(int j=1;j<=matrix[0].size();j++)
            {
                if(matrix[i-1][j-1]==1)
                {
                    int x=min(dp[i-1][j-1],dp[i-1][j]);
                    x=min(dp[i][j-1],x);
                    dp[i][j]=x+1;
                }
            }
        }
        int ans=0;
        for(auto num:dp)
        {
            for(auto it:num)
                ans+=it;
        }
        return ans;
    }
};