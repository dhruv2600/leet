class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int s=0;
        

        int currmul=1;

        int res=0;
        int size=0;
        for(int e=0;e<nums.size();e++)
        {
            currmul*=nums[e];
            //cout<<"yo";
            if(currmul<k)
            {
                size++;
                res+=size;
            }
            else
            {
                while(currmul>=k && s<e)
                {
                    currmul=currmul/nums[s];
                    s++;
                    size--;
                }
                size++;
                if(currmul<k)
                    res+=size;
            }
        }
        return res;
        
    }
};