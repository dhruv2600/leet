class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        vector<int>rs(heights.size());
        int l=heights.size();
        rs[l-1]=99999;
        stack<pair<int,int>>stk;
        stk.push(make_pair(heights[l-1],l-1));
        for(int i=l-2;i>=0;i--)
        {
            if(heights[i]>stk.top().first)
            {
                rs[i]=stk.top().second;
                stk.push(make_pair(heights[i],i));
            }
            else
            {
                while(!stk.empty()&& stk.top().first>=heights[i])
                {
                    stk.pop();
                }
                if(stk.empty())
                {
                    rs[i]=99999;
                }
                else
                    rs[i]=stk.top().second;
                stk.push(make_pair(heights[i],i));
            }
        }
        while(!stk.empty())
            stk.pop();
        vector<int>ls(heights.size());
        ls[0]=-1;
        stk.push(make_pair(heights[0],0));
        for(int i=1;i<l;i++)
        {
            if(heights[i]>stk.top().first)
            {
                ls[i]=stk.top().second;
                stk.push(make_pair(heights[i],i));
            }
            else
            {
                while(!stk.empty()&& stk.top().first>=heights[i])
                {
                    stk.pop();
                }
                if(stk.empty())
                {
                    ls[i]=-1;
                }
                else
                    ls[i]=stk.top().second;
                stk.push(make_pair(heights[i],i));
            }
        }

        int localarr=0;
        int maxarr=INT_MIN;
        for(int i=0;i<l;i++)
        {
            localarr=0;
            if(rs[i]==99999)
                localarr+=(l-i)*heights[i];
            else
                localarr+=(rs[i]-i)*heights[i];
            if(ls[i]==-1)
                localarr+=(i+1)*heights[i];
            else
                localarr+=(i-ls[i])*heights[i];
            localarr-=heights[i];
            maxarr=max(maxarr,localarr);
        }
        return maxarr;
    }
};