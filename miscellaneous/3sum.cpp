class Solution {
public:





    vector<vector<int>> paths;
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_map<int,int> twosum;
        unordered_map<string,vector<int>> ht;
        sort(nums.begin(),nums.end());
        int size=nums.size();

        int k;

        for(int i=0;i<size-2;i++)
        {
            int target=-nums[i];

            for(int j=i+1;j<size;j++)
            {
              int flag=0;
              int t=target-nums[j];
              auto it2=twosum.find(t);
              if(it2==twosum.end())
              {
                twosum.insert({nums[j],j});
              }
              else
              {
                k=it2->second;
                if(i<j && j<k)
                {
                  flag=1;
                  twosum.insert({nums[j],j});
                }
              }
                if(flag==1)
            {
                string curr;
                curr+=to_string(nums[i]);
                curr+=to_string(nums[j]);
                curr+=to_string(nums[k]);
                cout<<curr;
                sort(curr.begin(),curr.end());
                auto it=ht.find(curr);
                if(it==ht.end())
                {
                  vector<int> current;
                  current.push_back(nums[i]);
                  current.push_back(nums[j]);
                  current.push_back(nums[k]);
                  res.push_back(current);
                  ht.insert({curr,current});
              }
            }
            }


        }
        return res;
    }
};
