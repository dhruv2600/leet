int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int>dp(n);	    
	    for(int i=0;i<n;i++)
	        dp[i]=arr[i];
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	        	if(arr[j]>arr[i])
	        	{
	        		dp[j]=max(dp[j],dp[i]+arr[j]);
	        	}
	        }
	    }
	    return *max_element(dp.begin(),dp.end());
	}