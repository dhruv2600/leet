class Solution {
public:
    vector<vector<int>>dp;
    bool isValid(string s) {
        if(s=="")
            return 1;
        stack<char> paren;
        for (char& c : s) {
            switch (c) {
                case '(':
                case '{':
                case '[': paren.push(c); break;
                case ')': if (paren.empty() || paren.top()!='(') return false; else paren.pop(); break;
                case '}': if (paren.empty() || paren.top()!='{') return false; else paren.pop(); break;
                case ']': if (paren.empty() || paren.top()!='[') return false; else paren.pop(); break;
                default: ; // pass
            }
        }
        return paren.empty() ;
    }
    int helper(int start,int end,string s)
    {
        if(start>end || start>=s.length() ||end <0)
          return 0;
        if(dp[start][end]!=-99)
        {
          if(dp[start][end]==0)
          {
            return max(helper(start+1,end,s),helper(start,end-1,s));
          }
          else
          {
            return end-start+1;
          }
        }
        else
        {
           if(isValid(s.substr(start,end-start+1)))
           {
            dp[start][end]=1;
            return end-start+1;
          }
          else
          {
            dp[start][end]=0;
            return max(helper(start+1,end,s),helper(start,end-1,s));
          }
        }



    }
    int longestValidParentheses(string s) {
        dp.resize(s.length()+1);
        for(int i=0;i<=s.length();i++)
          dp[i].resize(s.length()+1,-99);
        if(s.length()==0)
            return 0;
        else if(s.length()==1)
            return 0;
        return helper(0,s.length()-1,s);
    }
};
