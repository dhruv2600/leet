class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int maxx=INT_MIN;
        int minn=INT_MAX;
        for(auto it:nums)
        {
            maxx=max(maxx,it);
            minn=min(minn,it);

        }
          vector<int>arr(abs(minn)+maxx+1,0);
          for(auto num:nums)
          {
            arr[num-minn]+=1;
          }
          int maxlen=-1;
          int flag=0;
          int locallen=0;
          cout<<arr[0];
          for(int i=0;i<arr.size();i++)
          {
            if(arr[i]>=1)
            {
               cout<<"entered";
               locallen+=1;
               maxlen=max(locallen,maxlen);
             }
             if(arr[i]==0)
               locallen=0;
          }
          return maxlen;
      }

};
