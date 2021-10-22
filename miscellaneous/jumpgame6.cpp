class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
      vector<int>dp;
      int len=nums.size();
      dp.resize(len+1);
      dp[len]=nums[len-1];
      for(int i=len-1;i>0;i--)
      {
        int m=INT_MIN;
        for(int j=1;j<=k;j++)
        {
          if(i+j>len)
            break;
          else
          {
            m=max(m,nums[i-1]+dp[i+j]);
          }
        }
        dp[i]=m;
      }
      return dp[1];
    }
};
