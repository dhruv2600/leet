class Solution {
public:
    int count=0;
    void beautrecur(vector<bool>arr,int start,int n)
    {
      if(start>n)
      {
        count++;
      }
      for(int i = 1; i <= arr.size();i++)
      {
        if(!arr[i-1])
        {
          if(i%start==0 || start%i==0)
          {
            arr[i-1] = true;
            beautrecur(arr,start+1,n);
            arr[i-1] = false;
          }
        }
      }
    }
    int countArrangement(int n) {
        vector<bool>visited(n,0);
        beautrecur(visited,1,n);
        return count;
    }
};
