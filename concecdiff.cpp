class Solution {
public:

    vector<int>res;
    void helper(string s,int end)
    {
        if(s.length()==n)
            res.push_back(stoi(s));
        else
        {
            if(end!=-1)
            {
                for(int i=0;i<=9;i++)
                {
                    if(abs(i-end)==k)
                        helper(s+to_string(i),i);
                }
            }
            else
            {
                for(int i=1;i<=9;i++)
                {
                    helper(to_string(i),i);
                }
            }  
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        
        
        helper("",-1);
        return res;
        
        
    }
};