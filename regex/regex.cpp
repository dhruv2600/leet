class Solution {
public:


    vector<vector<int>>dp;
    bool helper(string s,string p,int a,int b)
    {
        if(a>=s.length() && b>=p.length())
            return 1;
        if(a>=s.length() && p[b]!='*' || b>=p.length())
            return 0;
        if(dp[a][b]!=-1)
            return dp[a][b];
        if(a>=s.length() && p[b]=='*')
        {
            return dp[a][b]=helper(s,p,a,b+1);
        }
        if(p[b]=='?')
        {
            return dp[a][b]=helper(s,p,a+1,b+1);
        }
        if(p[b]=='*')
        {
            if(helper(s,p,a,b+1))
                return dp[a][b]=1;
            for(int i=a;i<s.length();i++)
            {
                if(helper(s,p,i+1,b+1))
                    return dp[a][b]=1;
            }
            
        }
        else if(s[a]==p[b])
        {
            return dp[a][b]=helper(s,p,a+1,b+1);
        }
        
        return dp[a][b]=0;   
    }
    bool isMatch(string s, string p) {
        int reclevel=0;
        dp.resize(s.length()+1,vector<int>(p.length()+1,-1));
        return helper(s,p,0,0);        
    }
};
