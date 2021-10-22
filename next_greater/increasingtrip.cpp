class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        stack<pair<int,int>>stk;
        vector<int>o;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(!stk.empty() && stk.top().first<=nums[i])
            {
                stk.pop();
            }
            if(stk.empty())
            {
                stk.push(make_pair(nums[i],0));
            }
            else
            {
                stk.push(make_pair(nums[i],stk.top().second+1));

                if(stk.top().second>=3)
                    return true;
            }
        }
        return false;
    }
};