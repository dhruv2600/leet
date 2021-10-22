class Solution {
public:

    int partition(int start,end,vector<int>&nums)
    {
        int pivot=nums[end];
        int pid=start;

        for(int i=start;i<end;i++)
        {
            if(nums[pid]<=pivot)
            {
                swap(nums[pid],nums[i]);
                pid++;
            }
        }
        return pid;

    }


    int helper(vector<int>&nums,int start,int end,int k)
    {
        int p=partition(start,end,nums);

        if(p==(nums.size()-k))
            return p;
        else if(p>(nums.size()-k))
            return helper(nums,start,p-1,int k);
        else
            return helper(nums,p+1,end,int k);
    }
    int findKthLargest(vector<int>& nums, int k) {
        return helper(nums,0,nums.size()-1,k);
    }
};