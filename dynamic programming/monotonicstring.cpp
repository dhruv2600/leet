class Solution {
public:
    vector<vector<int>>dp;
    
    int recur(int start,bool flag,string s)
    {
        if(start>=s.length())
        {
            return 0;
        }
        if(dp[start][flag]!=-1)
            return dp[start][flag];
        if(flag)
        {
            int ch=0;
            for(int i=start;i<s.length();i++)
            {
                if(s[i]=='0')
                    ch++;
            }
            return dp[start][flag]=ch;
        }
        if(!flag)
        {
            for(int i=start;i<s.length();i++)
            {
                if(s[i]=='1')
                {
                    return dp[start][flag]=min(1+recur(i+1,0,s),recur(i+1,1,s));
                }
            }
        }
        cout<<"never come here";
        return 0;
    }
    int minFlipsMonoIncr(string s) {
        dp.resize(2);
        for(int i=0;i<s.length();i++)
            dp[i].resize(s.length()+1,0);

        


        
        return recur(0,0,s);   
    }
};