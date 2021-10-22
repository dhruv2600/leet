class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {

        vector<int>extra=nums;

        sort(extra.begin(),extra.end());

        int maxxdiff=extra[nums.size()-1]-extra[0];

        
        vector<vector<int>>dp(nums.size(),vector<int>(maxxdiff+1,1));


        vector<unordered_map<int,int>>dp(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                dp[i][nums[j]-nums[i]]=max(dp[i][nums[j]-nums[i]],1+dp[j][nums[j]-nums[i]]);
            }
        }
        int maxx=INT_MIN;
        for(auto it:dp)
        {
            for(auto it2:it)
            {
                maxx=max(maxx,it2.second);
            }
        }
        return maxx;
    }
};