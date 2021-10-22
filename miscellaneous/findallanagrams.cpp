class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      vector<int> pv(26,0), sv(26,0), res;
      for(char c:p)
      {
        pv[c-'a']++;
        sv[c-'a']++;
      }
      if(pv==sv)
        res.push_back(0);
      for(int i=p.size();i<s.size();++1)
      {
        ++sv[s[i]-'a'];
        --sv[s[i-p.size()]-'a'];
        if(pv==sv)
        {
          res.push_back(i-p.size()+1);
        }
      }
      return res;
    }
};
