class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      unordered_map<int,vector<int>> ht;
      unordered_map<string,int> paths;
      for(int i = 0; i < nums.size();i++)
      {
        ht[nums[i]].push_back(i);
      }
      for(int i=0;i<nums.size();i++)
      {
        for(int j=i+1;j<nums.size();j++)
        {
          if(ht.find(0-num[i]-nums[j])!=ht.end())
          {
            for(auto it:ht[(0-num[i]-nums[j])])
            {
              if(i<j && j<it)
              {

              }
            }
          }
        }
      }

    }
};
