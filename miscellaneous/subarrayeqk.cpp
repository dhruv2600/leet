class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len=nums.size();
        unordered_map <int,int> ht;
        vector<int>dp(len+1);
        dp[0]=0;
        for(int i=0;i<=len;i++)
        {
          dp[i]=nums[i-1]+dp[i-1];
        }
        int count=0;
        ht.insert({0,1});
        for(int i=1;i<=len;i++)
        {
          if(ht.find(dp[i]-k)!=ht.end())
          {
            count+=ht[dp[i]-k];
            ht[dp[i]]++;
          }
          else
            ht.insert({dp[i],1});
        }
        return count;
    }
};
