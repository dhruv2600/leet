class Solution {
public:
    vector<vector<int>>v;
    int dfs(int i,int j,vector<vector<char>>&b,vector<vector<int>>&v)
    {
        if(i<0 || i>=b.size() || j<0 || j>=b[0].size()) return 0;
        if(b[i][j]=='O' && !v[i][j])
        {
            v[i][j]=1;
            int u=dfs(i+1,j,b,v);
            int d=dfs(i,j-1,b,v);
            int l=dfs(i,j+1,b,v);
            int r=dfs(i-1,j,b,v);
            if(i==0 || j==0 ||i==b.size()-1 ||j==b[0].size()-1)
                return 1;
            return u||d||l||r;
        }
        else
        {
            return 0;
        }
    }
    void capture(int i,int j,vector<vector<char>>&b,vector<vector<int>>&v)
    {
        if(i<0 || i>=b.size() || j<0 || j>=b[0].size()) return ;
        if(b[i][j]=='O' && v[i][j]!=2)
        {
            v[i][j]=2;
            capture(i+1,j,b,v);
            capture(i,j-1,b,v);
            capture(i,j+1,b,v);
            capture(i-1,j,b,v);
            b[i][j]='X';
        }
    } 
    void solve(vector<vector<char>>& board) {
        v.resize(board.size());
        for(int i=0;i<board.size();i++)
            v[i].resize(board[0].size(),0);
        for(int i=0;i<board.size();i++) {
            for(int j=0;j<board[0].size();j++) {
                if(!v[i][j] && board[i][j]=='O') {
                    int a=dfs(i,j,board,v);
                    if(!a)
                    {
                        cout<<"can capture"<<i<<j<<endl;
                        capture(i,j,board,v);
                    }
                }
            }
        }

    }
};