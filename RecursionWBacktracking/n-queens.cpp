class Solution {
public:
    vector<vector<string>> res;

    bool valid(vector<string>b,int i,int j,int n)
    {
         for(int k=0;k<n;k++)
         {
            if(b[i][k]=='Q')
                return false;
            if(b[k][j]=='Q')
                return false;
        }
        

    }

    vector<vector<string>> solveNQueens(int n) {


        string t;
        for(int i=0;i<n;i++)
            t+='.';

        vector<string>board(n,t);


        
        
        
        
    }
};
