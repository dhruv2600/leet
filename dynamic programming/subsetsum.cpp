class Solution{   
public:
    vector<vector<int>> dp;
    bool isSubsetSum(int N, int arr[], int sum){

        dp.resize(N+1);
        for(int i=0; i<N+1;i++)
        {
            dp[i].resize(sum+1,1);
        }
        for(int i=1;i<=sum;i++)
        {
            dp[0][i]=0;
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else if(arr[i-1]>j)
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[N][sum];



        // code here 
        
        
        
        
    }
};
