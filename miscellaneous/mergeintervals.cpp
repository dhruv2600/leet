class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      sort(intervals.begin(), intervals.end());
      int len=intervals.size();
      int count=0;
      int i=0;
      while(i<len-1)
      {
        if(intervals[i][1]>=intervals[i+1][0])
        {
          if(i+1<len-1)
          {
            if(intervals[i][1]>=intervals[i+2][0])
            {
              i=i+2;
              count++;
            }
            else
            {
              i=i+1;
              count++;
            }
          }
        }
        else
          i++;
      }
      return count;
    }
};
