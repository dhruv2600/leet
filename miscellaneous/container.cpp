class Solution {
public:

    int maxArea(vector<int>& height) {
      int i=0;
      int j=height.size()-1;
      int maxarr=(j-i)*min(height[i],height[j]);
      while(i<j)
      {
        maxarr=max(maxarr,(j-i)*min(height[i],height[j]);
        if(height[i]<height[j])
        {
          i++;
        }
        else if(height[i]>height[j])
        {
          j--;
        }
        else
          i++;
      }
      return maxarr;


    }
};
