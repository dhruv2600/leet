class Solution {
public:

    vector<int> helper(string &a)
    {
      vector<int> v[26];
      for(char c:a)
      {
        v[c-'a']+=1;
      }
      return v;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        vector<int> req[26]={0};

        for(auto it:words2)
        {
          std::vector<int> v =helper(it);
          for(int i=0;i<26;i++)
          {
            req[i]=max(req[i],v[i]);
          }
        }
        for(auto it:words1)
        {
          bool satisfied=1;
          std::vector<int> has[26];
          for(char c:it)
          {
            has[c-'a']+=1;
          }
          for(int i=0;i<26;i++)
          {
            if(has[i]<req[i])
            {
              satisfied=0;
              break;
            }
          }
          if(satisfied==1)
            res.push_back(it);
        }
        return res;
    }
};
