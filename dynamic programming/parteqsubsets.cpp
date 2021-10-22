class Solution {
public:








    bool canPartition(vector<int>& nums) {
        int maxsum=0;
        for(int i=0;i<nums.size();i++)
            maxsum+=nums[i];
        if(!maxsum%2)
            return false;
        vector<vector<int>>dp(nums.size()+1,vector<int>(maxsum+1,0));

        for(int j=0;j<=maxsum;j++)
            dp[0][j]=0;

        for(int i=0;i<=nums.size();i++)
            dp[i][0]=1;

        for(int i=1;i<=nums.size();i++)
        {
            for(int j=1;j<=nums.size();j++)
            {
                if(j>=nums[i-1])
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[nums.size()][maxsum/2])
            return true;
        return false;
    }
};