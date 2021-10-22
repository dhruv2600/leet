class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>ht;

        ht[0]=1;

        int cumsum=0;
        int res=0;

       for(auto num:nums)
       {
        cumsum+=num;

        int rem=cumsum%k;
        res+=ht[rem];
        ht[rem]++;
       }
       return res;
        
        
    }
};