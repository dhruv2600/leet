class Solution {
public:

    vector<vector<int>> board;
    vector<vector<int>> visited;
    int dfs(int i,int j,int start)
    {

      if(i<0 || i>7 || j<0 || j>7)    //out of bounds
        return 0;

      if(board[i][j]==2)
        return 1;
       // cout<<king[1];
      if(board[i][j]==1 && start!=0) //if current index has a queen blocking it
        return 0;

      if(visited[i][j] == 1) // already visited
        return 0;

      visited[i][j]=1; //visted this node
      else
      {
        int found=dfs(i+1,j,1)||dfs(i,j+1,1)||dfs(i,j-1,1)||dfs(i-1,j,1)||dfs(i+1,j+1,1,)||dfs(i-1,j-1,1,)||dfs(i-1,j+1,1)||dfs(i+1,j-1,1);
        if(found==1)
          return 1;
      }
      visted[i][j]=0;
      return 0;
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
        board[king[0]][king[1]]=2;
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
