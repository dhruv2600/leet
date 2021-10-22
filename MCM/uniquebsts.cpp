class Solution {
public:
    
    int recur(int i,int j)
    {
        if(i==j || i<=0 || i>j)
        {
            return 1;
        }
        int ut=0;
        for(int k=i;k<=j;k++)
        {
            ut+=recur(i,k-1)*recur(k+1,j);
        }
        return ut;
            
    }
    
    int numTrees(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        return recur(1,n);
        
    }
};