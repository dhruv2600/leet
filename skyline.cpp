class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        map<int,int>ht;
        int end=buildings[buildings.size()-1][1];
        int start=buildings[0][0];
        for(auto it:buildings)
        {
            for(int i=it[0];i<=it[1];i++)
            {
                ht[i]=max(ht[i],it[2]);
            }

        }
        int prevH=-1;
        int currH;
        vector<vector<int>>res;
        int prevP=start;
        for(auto it:ht)
        {
            if(prevP!=it.first-1)
            {
                cout<<"discontinuous";
                res.push_back({prevP,0});
                prevP=it.first;
            }
            if(prevH !=it.second)
            {
                if(prevH>it.second)
                {
                    res.push_back({it.first-1,it.second});
                    prevH=it.second;
                }
                else
                {
                    res.push_back({it.first,it.second});
                    prevH=it.second;
                }
            }
        }
        cout<<start;
        cout<<end;
        return res;
    }
};