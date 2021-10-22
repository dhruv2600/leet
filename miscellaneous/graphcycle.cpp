// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    vector<int> visited;
    vector<int>visiting;
	//Function to detect cycle in a directed graph.
	bool isCyclicdfs(int V,vector<int>adj[],int i)
	{

	    if(visiting[i]==1)
	        return 1;
	    visiting[i]=1;
	    for(int j=0;j<V;j++)
	    {
	        if(adj[i][j]==1 && !visited[j])
	        {
	            if(isCyclicdfs(V,adj,j))
	                return 1;
	        }
	    }
	    visited[i]=1;
	    visiting[i]=0;
	    return 0;
	}
	bool isCyclic(int V, vector<int> adj[])
	{
	    visited.resize(V,0);
	    visiting.resize(V,0);
	   	for(int i=0;i<V;i++)
	   	{
	   	    for(int j=0;j<V;j++)
	   	    {
	   	        if(adj[i][j]==1)
	   	        {
	   	            if(isCyclicdfs(V,adj,j))
	   	                return true;
	   	        }
	   	    }
	   	}
	   	return false;
	}
};

// { Driver Code Starts.


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
