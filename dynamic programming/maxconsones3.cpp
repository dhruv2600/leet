class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int s=0;
        int e=0;
        int local=0;
        int maxx=INT_MIN;
        int z=0;
        for(int e=0;e<nums.size();e++)
        {
            if(nums[e])
            {
                local++;
            }
            else
            {
                if(z<k)
                {
                    z++;
                    local++;
                }
                else
                {
                    maxx=max(end-start,maxx);
                    while(nums[s]!=0)
                    {
                        s++;
                        local--;
                    }
                    z--;
                }
            }
        }
        maxx=max(maxx,local);
    }
};