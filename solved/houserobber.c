int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int rob(int* nums, int numsSize){
    if(numsSize==0)
        return 0;
    int *dp=(int *)malloc((numsSize+1)*sizeof(int));
    dp[0]=0;
    dp[1]=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        dp[i+1]=max(dp[i],dp[i-1]+nums[i]);
    }
    return dp[numsSize];

}
