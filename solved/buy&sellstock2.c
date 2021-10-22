

int maxProfit(int* prices, int pricesSize){
    int *dp=(int *)malloc(sizeof(int)*(pricesSize+1));
    dp[0]=0;
    dp[1]=0;
    int globalow=prices[0];
    int localow=prices[0];
    for(int i=1;i<pricesSize;i++)
    {
        if(prices[i])
        if(dp[i]+prices[i]-localow>dp[i])
        {
            localow=-1;

        }
    }



}
