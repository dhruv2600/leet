class Solution {
public:
    unordered_map<string,int> ht;
    vector<vector<bool>> v;
    const vector<vector<int>> dir={{-1,0},{1,0},{0,-1}{0,1}};
    vector<string> res;
    void dfs(string curr,int i,int j,vector<vector<char>> &b)
    {
      if(ht.find(curr)!=ht.end())
        res.push_back(curr);
      v[i][j]=1;
      for(auto it:dir)
      {
        if(it[0]+i >=0 && it[0]+i<b.size() && it[1]+j >=0 && it[1]+j<b[0].size)
        {
          if(!v[it[0]+i][it[1]+j])
          {
            dfs(curr+b[it[0]+i][it[1]+j],it[0]+i,it[1]+j,b);
          }
        }
      }
      v[i][j]=0;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
      for(string &s:words)
      {
        ht[s]++;
      }
      v.resize(board.size());
      for(int i = 0; i < board.size();i++)
        v[i].resize(board.size(),0);

    }
};
