class Solution {
public:
    int trap(vector<int>& height) {

        for(int i=0;i<height.size();i++)
        {
            if(height[i]>0)
            {
                for(int j=i+1;j<=height.size();j++)
                {
                    bool found = false;
                    int width=0;
                    if(height[j]>=height[i])
                    {
                      found = true;
                      break;
                    }
                    else
                      width++;
                }
                
            }
        }





    }
};
