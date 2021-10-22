class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    vector<int> conv(int number)
    {
        vector<int>res(32);
        int i=0;
        int rem=number;
        while(rem>0)
        {
            res[i]=rem%2;
            rem=rem/2;
            i++;
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
    int countBitsFlip(int a, int b){
        
        // Your logic here
        vector<int>a1=conv(a);
        vector<int>a2=conv(b);
        int count=0;
        for(int i=0;i<32;i++)
            if(a1[i]!=a2[i])
                count++;
        return count;
        
    }
};