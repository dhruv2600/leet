class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> cumsum;
        cumsum.push_back(0);
        unordered_map<int,int> ht;
        ht[0]=0;
        for(int i=1;i<=nums.size();i++)
        {
            cumsum.push_back(cumsum[i-1]+nums[i-1]);
            ht[cumsum[i]]=i;
        }
        for(int i=2;i<=nums.size();i++)
        {
            for(auto it:ht)
            {
                if(it.second<i && it.first && )
            }
        }



    }
};
