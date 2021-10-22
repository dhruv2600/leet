class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

      bool flag = false;
      for(auto it:intervals)
      {
        if(!flag) //use newInterval
        {
        if(it[0]=<newInterval[0] && it[1]>=newInterval[0])
        {
          vector<int>new;
          new[0]=min(it[0],newInterval[0])
          new[1]=max(it[1],newInterval[1]);
          flag=1;
          it[0]=INT_MAX;
          it[1]=INT_MAX;
        }
        }
        else if(flag) //use oldInterval
        {
          if(it[0]<=new[0] && it[1]>=new[0])
          {
            new[0]=min(it[0],new[0])
            new[1]=max(it[1],new[1]);
            it[0]=INT_MAX;
            it[1]=INT_MAX;
          }
        }
      }
      vector<vector<int>>res;
      for(auto it:intervals)
      {
        if(it[0]!=INT_MAX && it[1]!=INT_MAX)
          res.push_back(it);
      }
      if(flag)
        res.push_back(new);
      else
        res.push_back(newInterval);
      return res;

    }
};
