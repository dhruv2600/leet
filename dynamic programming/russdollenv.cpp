class Solution {
public:
    static bool comp(pair<int,int>p1,pair<int,int>p2)
    {
        if(p1.first<p2.second)
        {
            return 0;
        }
        else if(p1.first==p2.first)
        {
            return p1.second>p2.second;
        }
        else
            return 1;
    }
    int helper(int h,int w,vector<pair<int,int>>p,int index)
    {
        if(index>=p.size())
            return 0;
        else
        {
            if(p[index].first>=h || p[index].second>=w)
                return helper(h,w,p,index+1);
            else
            {
                return max(1+helper(p[index].first,p[index].second,p,index+1),helper(h,w,p,index+1));
            }
        }
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int num=envelopes.size();
        vector<pair<int,int>>p;
        for(int i=0;i<num;i++)
        {
            p.push_back(make_pair(envelopes[i][0],envelopes[i][1]));
        }
        sort(p.begin(),p.end(),comp);
        int maxx=INT_MIN;
        for(int i=0;i<num;i++)
        {
            maxx=max(maxx,helper(p[i].first,p[i].second,p,i+1));
        }
        return 0;
    }
};