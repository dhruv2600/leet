class Solution {
public:

    bool matcher(string s,string p, char c)
    {
      int i=0;
      int j=0;
      while(i<s.length() && j<p.length())
      {
        if(s[i]==p[j])
        {
          i++;
          j++;
        }
        else
          break;
      }
      if(i==s.length() && j==p.length())
        return true;
      return false;
    }
    bool isMatch(string s, string p) {
      int s1=0;
      int s2=0;

    }
};
