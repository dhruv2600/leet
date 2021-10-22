class Solution {
public:
    vector<int> avoidFlood(vector<int>& r) {
      unordered_map<int,int> ht;
      vector<int> res;
      vector<int>empty;
      int len=r.size();
      for(int i=0;i<len;i++)
      {
        if(r[i]!=0)
        {
          if(ht.find(r[i])!=ht.end())
            return empty;
          else
          {
            ht.insert({r[i],1});
            res.push_back(-1);
          }
        }
        else if(r[i]==0)
        {
          int flag=0;
          for(int j=i+1;j<len;j++)
          {
            auto it=ht.find(r[j]);
            if(it!=ht.end())
            {
              ht.erase(it);
              res.push_back(r[j]);
              flag=1;
              break;
            }
          }
          if(flag==0)
              res.push_back(1);
        }
      }
      return res;
    }
};
