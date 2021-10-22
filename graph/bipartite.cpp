#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int>v;
    vector<int>colors;
    int dfs(int i,vector<vector<int>>&adj)
    {
        v[i]=1;
        for(int j=0;j<adj.size();j++)
        {
            if(adj[i][j])
            {
                if(colors[i]==colors[j])
                {
                    cout<<"FOUND"<<i;
                    return 1;
                }
                else
                 {
                     colors[j]=!colors[i];
                 };
            }
        }
        return 0;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<vector<int>>adj(n,vector<int>(n,0));
        for(auto it:dislikes)
            adj[it[0]-1][it[1]-1]=1;
        v.resize(n);
        colors.resize(n,-1);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(!v[i])
            {
                if(dfs(i,adj))
                    flag=1;
            }
        }
        if(flag)
            return false;
        return true;
        
    }
};