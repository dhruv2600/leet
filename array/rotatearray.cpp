class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int index=0;
        int data=nums[0];
        int putin=0;

        int start=0;


        while(putin<nums.size())
        {
            do{
                int temp=nums[(index+k)%nums.size()];
                nums[(index+k)%nums.size()]=data;

                data=temp;

                index=(index+k)%nums.size()

                putin++;

            }
            while(index!=start)

            start++;
            index=start;
            data=nums[index];
        }
    }
};