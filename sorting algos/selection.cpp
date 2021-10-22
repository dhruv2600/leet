void selectionSort(vector<int>arr,int n)
{
	for(int i=0;i<n;i++)
	{
		int min_idx=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[min_idx])
				min_idx=j;
		}
		swap(min_idx,i);
	}
}