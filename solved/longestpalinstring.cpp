class Solution {
public:
    vector<vector<int>> dp;
    string longestPalindrome(string s) {

        int size=s.length();
        if (size == 0 or size == 1) {
            return s;
        }
        int start=0;
        int end=s.length()-1;
        dp.resize(size);
        int maxlen=-1;
        int iindex;
        int jindex;
        for(int i=0;i<size;i++)
            dp[i].resize(size,0);
        for(int i=size-1;i>=0;i--)
        {
            for(int j=0;j<size;j++)
            {
                if(i>j)
                    dp[i][j]=1;
                else if(i==j)
                    dp[i][j]=1;
                else if(s[i]==s[j])
                {
                    dp[i][j]=dp[i+1][j-1];
                }
                else if(s[i]!=s[j])
                {
                    dp[i][j]=0;
                }
                if(dp[i][j]==1)
                {
                    if(j-i>maxlen)
                    {
                        maxlen=j-i;
                        iindex=i;
                        jindex=j;
                    }
                }
            }
        }


        string res="";
        for(int i=iindex;i<=jindex;i++)
            res+=s[i];

        return res;

    }
};
