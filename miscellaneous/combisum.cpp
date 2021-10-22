class Solution {
public:
    vector<vector<int>> res;
    void helper(vector<int> curr,int cs,int t,vector<int>& c)
    {
      if(cs==t)
      {
        res.push_back(curr);
        return;
      }
      for(int i=0;i<c.size() && (c[i]+cs<=t);i++)
      {
            curr.push_back(c[i]);
            helper(curr,cs+c[i],t,c);
            curr.pop_back();
      }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
      sort(c.begin(),c.end());
      vector<int>curr;
      helper(curr,0,target,c);
    }
};
