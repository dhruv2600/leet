class Solution {
public:




    vector<vector<int>>prefix;
    int findplus(int i,int j,vector<vector<bool>>mat,int n)
    {
        vector<vector<int>>dir={{0,1},{-1,0},{0,-1},{1,0}};
        vector<int>s;
        for(auto it:dir)
        {
            int x=it[0]+i;
            int y=it[1]+j;
            int len=0;
            while(x>=0 && y>=0 && x<n && y<n && mat[x][y]==1)
            {
                len++;
                x+=it[0];
                y+=it[1];
            }
            s.push_back(len);
        }
        int minn=INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            minn=min(minn,s[i]);
        }
        return minn+1;
    }



    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<bool>>mat(n,vector<bool>(n,1));
        prefix.resize(n+1);
        for(int i=0;i<=n;i++)
        for(int j=0;j<=n;i++)

        for(auto it:mines)
        {
            mat[it[0]][it[1]]=0;
        }
        int k=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                   k=max(k,findplus(i,j,mat,n));
            }
        }
        if(k==INT_MIN)
            return 0;
        return k;
    }
};