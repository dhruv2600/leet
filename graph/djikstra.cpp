class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> shortest(V);
        for(int i=0;i<adj[S].size();i++)
        {
          if(adj[S][i]==0)
            shortest[i]=INT_MAX;
          else
            shortest[i]=adj[S][i];
        }

    }
};
