class Solution {
public:
    vector<int> dp;
    bool isperfect(int n)
    {
      if (n > 0) {

        int sr = sqrt(n);
        return (sr * sr == n);
    }
    // else return false if n<0
    return false;
    }
    int numSquaresrecur(int n) {
        if(n==0)
            return 0;
        if(dp[n]!=-1)
          return dp[n];
        int k=100000;
        int m=n;
        if(isperfect(n)) return 1;
        else
        {
          while (m>0) {
            if(isperfect(m))
              k=min(k,1+numSquares(n-m));
              m--;
          }
        }
        return dp[n]=k;
    }
    int numSquares(int n){
      dp.resize(n+1,-1);
      dp[0]=0;
      return numSquaresrecur(n);
    }
};
