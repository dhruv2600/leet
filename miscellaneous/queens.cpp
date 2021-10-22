class Solution {
public:

    vector<vector<int>> board;
    vector<vector<int>> visited;
    void dfs(int i,int j,int* flag,int start,vector<int>& king)
    {
      if( *flag==1) //alread found king
        return;
       // cout<<king[1];
      if(i<0 || i>7 || j<0 || j>7 || *flag==1) //out of bounds
        return;

      if(board[i][j]==1 && start!=0) //if current index has a queen blocking it
        return;

      if(visited[i][j] == 1) // already visited
        return;
      else
        visited[i][j]=1; //visted this node
      if( i== king[0] && j==king[1]) //this node is king
        {
          *flag=1;
          return;
        }
      else
      {
        dfs(i+1,j,flag,1,king);
        dfs(i,j+1,flag,1,king);
        dfs(i,j-1,flag,1,king);
        dfs(i-1,j,flag,1,king);
        dfs(i+1,j+1,flag,1,king);
        dfs(i-1,j-1,flag,1,king);
        dfs(i-1,j+1,flag,1,king);
        dfs(i+1,j-1,flag,1,king);
        return;
      }
    }

    //conditions:- if its on the same row,or same column, & NO ONE else is there then only
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        board.resize(8);
        visited.resize(8);
        vector <vector<int>> res;
        for(int i=0;i<8;i++)
        {
          board[i].resize(8,0);
          visited[i].resize(8,0);
        }

        for(int i=0;i<queens.size();i++)
        {
          board[queens[i][0]][queens[i][1]]=1;
        }
        for(int i=0;i<queens.size();i++)
        {
          int flag=0;

          for(int i=0;i<8;i++)
             visited[i].assign(8,0);

          dfs(queens[i][0],queens[i][1],&flag,0,king);

          if(flag==1)
            res.push_back(queens[i]);
        }
        for(int i=0;i<8;i++)
        {
            printf("row is %d -->",i);
            for(int j=0;j<8;j++)
                cout<<visited[i][j];
            cout<<"\n";
        }
        return res;
    }
};
