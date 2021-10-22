class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {


      int currsum=0;
      int maxx=INT_MAX;
      int start=0;

      for(int i=0;i<nums.size();i++)
      {
        currsum += nums[i];
        if(currsum<k)
        {
          //do nothign
        }
        else if(currsum>=k) //try removing to make subarray shorterrr
        {

          while(currsum>=k)
          {
            maxx=min(i-start+1,maxx);
            currsum-=nums[start];
            start++;
          }
        }

      }
      return maxx;





    }
};
