class Solution {
public:
    vector<vector<int>>dp;
    vector<int>res;
    int globalsum=0;
    void dfsrecur(int i,vector<int>&v,vector<vector<int>>adj,int currsum,int src)
    {
        if(!v[i])
        {
            globalsum+=currsum;
            dp[src][i]=currsum;
            dp[i][src]=currsum;
            v[i]=1;
        }
        for(int j=0;j<adj.size();j++)
        {
            if(adj[i][j]==1 && !v[j])
            {
                dfsrecur(j,v,adj,currsum+1,src);
            }
        }
        v[i]=0;
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n,vector<int>(n,0));
        for(auto it : edges)
        {
            adj[it[0]][it[1]]=1;
            adj[it[1]][it[0]]=1;
        }
        dp.resize(n);
        for(int i=0;i<n;i++)
        {
            dp[i].resize(n,-1);
        }
        vector<int>v(n,0);
        for(int i=0;i<n;i++)
        {
            dfsrecur(i,v,adj,0,i);
            res.push_back(globalsum);
            globalsum=0;
        }
        return res;
    }
};