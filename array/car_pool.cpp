class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {

      int car=0;

      unordered_map<int,int>pick;
      unordered_map<int,int>drop;

      int maxdrop=INT_MIN;

      for(auto it:trips)
      {
        pick[it[1]]=it[0];
        drop[it[2]]=it[0];

        maxdrop=max(maxdrop,it[2]);
      }

      for(int i=1;i<=maxdrop;i++)
      {
        if(pick[i]!=0)
        {
          car+=pick[i];
        }
        if(drop[i]!=0)
        {
          car-=drop[i];
        }
        if(car>capacity|| car<0)
          return false;
      }
      cout<<car;
      return true;


    }
};
