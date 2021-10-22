class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        
        int minl=0;

        int currsum=0;

        int start=0;
        int end=0;


        for(int end=0;end<nums.size();i++)
        {
            currsum+=nums[end];
            if(currsum<target)
                continue;
            else if(currsum>=target)
            {
                minl=min(minl,end-start+1);
                currsum-=nums[start];
                start++;
            }
        }
        return minl;

        
        
        
        
    }
};