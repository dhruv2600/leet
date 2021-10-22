int maxProfit(int* prices, int pricesSize){
    int max=0;
    int low=prices[0];
    for(int i=1;i<pricesSize;i++)
    {
        if(prices[i]<low)
            low=prices[i];
        else
        {
            if(max<prices[i]-low)
                max=prices[i]-low;
        }
    }
    return max;


}
