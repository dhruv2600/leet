class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>>dp(matrix.size()+1,vector<int>(matrix[0].size()+1,0));

        for(int i=1;i<=matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(matrix[i-1][j-1]=='0')
                    dp[i][j]=0;
                else
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+1;
            }
        }
        int maxx=INT_MIN;
        for(auto it:dp)
        {
            for(auto num:it)
            {
                maxx=max(maxx,num);
            }
        }
        return maxx;
        
    }
};