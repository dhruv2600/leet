class Solution {
public:
    vector<vector<bool>>visited;
    int findadj(int i,int j,string<string<char>> board,int cind,string word)
    {
      if(i<0 || i>=board.size() || j<0 || j>=board[0].size() ) //out of bounds
        return 0;
      if(cind==word.length())  //word found
        return 1;
      if(visited[i][j]==1)
        return 0;
      if(board[i][j]!=word[cind])
        return 0;
      visted[i][j]=1;
      int down= findadj(i+1,j,board,cind+1,word);
      if(down==1)
        return 1;
      int right= findadj(i,j+1,board,cind+1,word);
      if(right==1)
        return 1;
      int up= findadj(i-1,j,board,cind+1,word);
      if(up==1)
        return 1;
      int left= findadj(i,j-1,board,cind+1,word);
      if(left==1)
        return 1;
      return 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int rows=board.size();
        int cols=board[0].size();
        visited.resize(rows);
        for(int i=0;i<rows;i++)
        {
          for(int j=0;j<rows;j++)
          {
            if(board[i][j]==word[0])
            {
              for(int k=0;k<rows;k++)
                visited[i].assign(cols,0);
              int found = findadj(i,j,board,0,word);
              if(found==1)
                return 1;
            }
          }
        }
        return 0;
    }
};
