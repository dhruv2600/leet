class Solution {
public:

    int odd=0;
    int even=0;

    bool isfair(vector<int>& nums)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2)
                even++;
            else
                odd++;
        }
        return odd==even;
    }
    int waysToMakeFair(vector<int>& nums) {

        vector<int>pref;
        pref[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            pref[i]=nums[i]+pref[i-1];
        
    }
};