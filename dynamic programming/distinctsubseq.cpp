class Solution {
public:
    vector<vector<int,int>>dp;
    int helper(int x,int y,string s,string t)
    {
        if(y>t.length())
            return 1;
        if(x>s.length())
            return 0;
        if(dp[x][y]!=-1)
            return dp[x][y];
        if(s[x]==t[y])
        {
            return dp[x][y] = helper(x+1,y+1,s,t)+helper(x+1,y,s,t);
        }
        else
            return dp[x][y]= helper(x+1,y,s,t);
    }
    int numDistinct(string s, string t) {

        dp.resize(s.length());
        for(int i=0;i<s.length();i++)
            dp[i].resize(t.length(),-1);


        return helper(0,0,s,t);
        
    }
};