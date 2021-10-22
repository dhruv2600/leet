class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        vector<unordered_map<char,int>> htw2;
        vector<unordered_map<char,int>> htw1;
        htw1.resize(words1.size());
        htw2.resize(words2.size());
        for(int i=0;i<words2.size();i++)
        {
          for(int j=0;j<words2[i].length();i++)
            {
              auto it=htw2[i].find(words2[i][j]);
              if(it==htw2[i].end())
              {
                htw2[i].insert({words2[i][j],1});
              }
              else
                it->second++;
            }
        }
        for(int i=0;i<words1.size();i++)
        {
          for(int j=0;j<words1[i].length();i++)
            {
              auto it=htw1[i].find(words1[i][j]);
              if(it==htw1[i].end())
              {
                htw1[i].insert({words1[i][j],1});
              }
              else
                it->second++;
            }
        }
        for(int i=0;i<words1.size();i++)
        {
          int flag=1;
          for(int j=0;j<words2.size();j++)
          {
            for( auto it:htw2[j])
            {
              if(htw2[j].find(it.first)== htw2[j].end() || htw2[j][it.first]<it.second)
              {
                flag=0;
                break;
              }
            }
          }
          if(flag==1)
            res.push_back(words1[i]);
        }
        return res;
    }
};
