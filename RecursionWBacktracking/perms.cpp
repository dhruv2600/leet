class Solution {
public:
    vector<vector<int>> res;
    vector<int>v;
    void helper(int i,vector<int>curr,int n,vector<int>& nums)
    {
        if(n==nums.size())
            res.push_back(curr);
        for(int i=0;i<nums.size();i++)
        {
            if(!v[i])
            {
                v[i]=1;
                curr.push_back(nums[i]);
                helper(i+1,curr,n+1,nums);
                curr.pop_back();
                v[i]=0;
            }
        }

   
    }
    vector<vector<int>> permute(vector<int>& nums) {


        v.resize(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            helper(i+1,{nums[i]},0,nums);
        }
        return res;
      
    }
};