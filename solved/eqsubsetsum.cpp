class Solution {
public:
    vector<vector<int>> dp;
    void SubSetSums(vector<int>& nums, int max)
    {
        int size=nums.size();
        cout<<size+1;
        dp.resize(size+1);
        for (int i = 0; i <= size; i++)
        {
            dp[i].resize(max+1);
        }

        for(int i=0;i<=max;i++)
            dp[0][i]=0;
         dp[0][0]=1;
         for(int i=1;i<=size;i++)
         {

                dp[i][0]=1;
         }
        for(int i=1;i<size+1;i++)
        {
            for(int j=1;j<max+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]= dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else if(nums[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }


            }
        }
    }


    bool canPartition(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++)
            max+=nums[i];
        if(max%2!=0)
            return false;
        SubSetSums(nums,max);
       if(dp[nums.size()][max/2]==1)
           return 1;
        return 0;
    }
};
