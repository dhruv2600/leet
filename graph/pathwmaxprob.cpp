class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {

        vector<vector<double>>adj(n,vector<double>(n));

        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]][edges[i][1]]=succProb[i];
            adj[edges[i][1]][edges[i][0]]=succProb[i];
        }
        priority_queue<pair<double,int>>pq;

        vector<double>prob(n);
        pq.push(make_pair(1,start));

        vector<int>v(n);



        while(!pq.empty())
        {
            pair<double,int>top=pq.top();
            pq.pop();
            int node=top.second;
            double p=top.first;

            if(v[node])
                continue;
            v[node]=1;

            prob[node]=p;

            for(int i=0;i<adj[node].size();i++)
            {
                if(adj[node][i]!=0)
                {
                    pq.push(make_pair(p*adj[node][i],i));
                }
            }
        }
        return prob[end];


        
    }
};