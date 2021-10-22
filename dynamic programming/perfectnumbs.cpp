class Solution {
public:
    vector<int>dp;
    bool isPerf(int n)
    {
        int a=sqrt(n);
        if(a*a==n)
            return 1;
        return 0;
    }
    int recur(int n)
    {
        if(n==0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];

        if(isPerf(n))
            return dp[n]=1;

        int minn=INT_MAX;
        for( int m=1;m<sqrt(n);m++)
        {
            minn=min(minn,1+recur(n-m*m));
        }
        return dp[n]=minn;
    }
    int numSquares(int n) {

        dp.resize(n+1,-1);
        return recur(n);
    }
};