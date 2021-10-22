class Solution{
public:

	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
      unordered_map<int,int> ht;
      for(auto it:arr)
        ht.insert({it,1});
      int count=0;
      for(int i=0;i<n-1;i++)
      {
        for(int j=i;j<n;j++)
        {
          if(ht.find(arr[i]+arr[j])!=ht.end())
            count++;
        }
      }
      return count;
	}
};
