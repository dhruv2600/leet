class Solution {
public:

    void swap(vector<int>&nums,int i,int j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i;
        cout<<"HI";
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
                break;
        }
        cout<<i;
        if(i==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        else
        {
            int j;
            cout<<"hello";
            for(j=n-1;j>i;j--)
            {
                if(nums[j]>nums[i])
                    break;
            }
            cout<<"yo";
            swap(nums,i,j);
            cout<<"OK";
            if(i !=nums.size()-1)
                reverse(nums.begin()+i+1,nums.end());
            
            return;
        }
        
    }
};