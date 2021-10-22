class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        
        
        int r=dungeon.size();
        int c=dungeon[0].size();


        vector<vector<int>>dp(r,vector<int>(c,0));

        dp[0][0]=dungeon[0][0];

        for(int i=1;i<r;i++)
            dp[i][0]=dp[i-1][0]+dungeon[i][0];
        for(int j=1;j<c;j++)
            dp[0][j]=dp[0][j-1]+dungeon[0][j];


        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }

        int m=r-1;
        int n=c-1;

        while(m>=0 && n>=0)
        {
            cout<<"muda";
        }

        if(dp[i][j])




        
        
    }
};