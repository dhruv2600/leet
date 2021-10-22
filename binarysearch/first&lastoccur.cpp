class Solution {
public:

    
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int>res={INT_MAX,INT_MIN};

        int start=0;
        int end=nums.size()-1;
        while(start<end) //for start of element
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                res[0]=min(res[0],mid);
                end=mid-1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
        }

         while(start<end) //for end of element
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                res[1]=max(res[1],mid);
                start=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
        }
        return res;
    }
};