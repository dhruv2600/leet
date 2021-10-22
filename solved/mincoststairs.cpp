class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp;
        int len=cost.size();
        dp.resize(len+1);
        int dest=len+1;
        dp[len]=0;
        dp[len-1]=cost[len-1];
        for(int i=len-2;i>=0;i--)
        {
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);

    }
};
