class Solution {
public:
    vector<int>prefix;

    vector<vector<int>>dp;
    int recur(vector<int>&nums,int start,int end)
    {
        if(start==end)
            return nums[start];
        int otherminn=0;
        if(dp[start][end]!=-1)
            return dp[start][end];
        for(int i=start;i<end;i++)
        {
            otherminn=min(recur(nums,start+1,end),recur(nums,start,end-1));
        }
        int currsum=0;
        for(int i=start;i<=end;i++)
            currsum+=nums[i];
        return dp[start][end]=currsum-otherminn;
    }
    bool PredictTheWinner(vector<int>& nums) {

        dp.resize(nums.size()+1);
        for(int i=0;i<=nums.size();i++)
            dp[i].resize(nums.size()-1,-1);
        int total=0;
        for(int i=1;i<nums.size();i++)
            total+=nums[i];
        int a=recur(nums,0,nums.size()-1);
        return a>(total-a);
    }
};