class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        
        int pos=INT_MIN;
        unordered_map<int,int>ht;
        for(auto num:position)
        {
            pos=max(pos,num);
            ht[num]++;
        }
        int local;
        int global;
        for(int i=1;i<pos;i++)
        {
            local=0;
            for(int j=1;j<pos;j++)
            {
                if(j==i) // dont do anything to local
                {
                    
                }
                
            }
        }

        
    }
};