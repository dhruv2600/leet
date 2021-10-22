class Solution {
public:
    int climbStairs(int n) {

        int dp[3]={0,1,2};

        if(n<3)
            return dp[n];

        for(int i=3;i<=n;i++)
        {
            dp[i%3]=dp[(i-1)%3]+dp[(i-2)%3];
        }
        return dp[n%3];
        }

};
