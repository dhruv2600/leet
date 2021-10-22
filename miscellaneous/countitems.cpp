class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
      int i;
      int count=0;
      if(ruleKey=="color")
        i=1;
      if(ruleKey=="type")
        i=0;
      if(ruleKey=="name")
        i=2;
      for(auto it:items)
      {
        if(it[i]==ruleValue)
          count++;
      }
      return count;

    }
};
