class Solution {
public:
    vector<vector<int>> res;
    void swap(vector<int>&nums,int s,int e)
    {
        int temp=nums[s];
        nums[s]=nums[e];
        nums[e]=temp;
    }
    void helper(int i,vector<int>& nums)
    {
        if(i>=nums.size())
            res.push_back(nums);
        else
        {
            for(int s=i;s<nums.size();s++)
            {
                swap(nums,i,s);
                helper(i+1,nums);
                swap(nums,i,s);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        helper(0,nums);
        return res;
    }
};