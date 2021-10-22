class Solution {
public:
    unordered_map<int,vector<int>>ht;
    int time=0;
    int dfs(int node,vector<int> informTime)
    {
        if(ht[node].size()==0)
        {
            return 0;
        }
        else
        {
            int t=0;
            for(auto num:ht[node])
            {
                t=max(t,dfs(num,informTime));
            }
            cout<<t+informTime[node]<<endl;
            return t+informTime[node];
        }
       
    }    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        int lead;
        for(int i=0;i<n;i++)
        {
            ht[manager[i]].push_back(i);
        }
        return dfs(headID,informTime);
        
    }
};