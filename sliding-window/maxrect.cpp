class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        vector<int> left(heights.size());
        vector<int> right(heights.size());
        stack<pair<int,int>>stk;
        stk.push(make_pair(-1,0));
       
        for(int i=0;i<heights.size();i++)
        {
            
            if(heights[i]>stk.top().first)
            {
                
                left[i]=stk.top().second;
               
                stk.push(make_pair(heights[i],i));
            }
           
            if(heights[i]<stk.top().first)
            {
                while(!stk.empty() && stk.top().first>heights[i])
                {
                    stk.pop();
                }
                left[i]=stk.top().second;
                stk.push(make_pair(heights[i],i));
            }
        }
        cout<<"HI";
        while(!stk.empty())
            stk.pop();

        stk.push(make_pair(-1,heights.size()-1));

        cout<<"second";
        for(int i=heights.size()-1;i>=0;i--)
        {
            if(heights[i]>stk.top().first)
            {
                right[i]=stk.top().second;
                stk.push(make_pair(heights[i],i));
            }
            if(heights[i]<stk.top().first)
            {
                while(!stk.empty() && stk.top().first>heights[i])
                {
                    stk.pop();
                }
                right[i]=stk.top().second;
                stk.push(make_pair(heights[i],i));
            }
        }

        for(auto it:left)
            cout<<it<<"  ";
        cout<<endl;
        for(auto it:right)
            cout<<it<<" ";
        cout<<endl;

        return 1;
        for(int i=0;i<heights.size();i++)
        {
            maxarr=max(maxarr,right[i]-left[i]+1);
        }
        return maxarr;
        
    }
};