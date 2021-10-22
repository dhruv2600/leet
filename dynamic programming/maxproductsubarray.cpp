class Solution {
public:
    int maxProduct(vector<int>& nums) {

        vector<int>maxp(nums.size(),0);
        vector<int>maxn(nums.size(),0);

       if(nums[0]>0)
       {
        maxp[0]=nums[0];
        maxn[0]=0;
       }
       else
       {
        maxp[0]=0;
        maxn[0]=nums[0];
       }
        for(int i=1;i<nums.size();i++)
        {
            int c=max(maxn[i-1]*nums[i],maxp[i-1]*nums[i]);
            c=max(c,nums[i]);
            maxp[i]=c;

            int l=min(maxn[i-1]*nums[i],maxp[i-1]*nums[i]);
            l=min(l,nums[i]);
            if(l>0)
                maxn[i]=0;
            else
                maxn[i]=l;
        }
        int maxx=INT_MIN;
        for(auto it:maxp)
            maxx=max(maxx,it);
        return maxx;











        
    }
};